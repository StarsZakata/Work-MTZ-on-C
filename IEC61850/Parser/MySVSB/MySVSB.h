//
// Created by Сергей on 30.09.2021.
//

#ifndef MTZ_MYSVSB_H
#define MTZ_MYSVSB_H

#include <iostream>
#include <iterator>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>

#include <SAV.h>
#include <LN.h>

using namespace std;

class MySVSB: public LN {

public:
        /**Считанный файл CFG*/
        vector<string> cfgFileLines;
        /**Считанный файл DAT*/
        vector<string> datFileLines;

        /**Сигналы*/
        /**Мгновенные величины*/
        vector<SAV> signals;
        /**Коэффициенты А*/
        vector<float> a;
        /**Коэффициенты В*/
        vector<float> b;
        /**Количество получаемых из COMTRADE файла сигналов*/
        int number = 0;

        /**Элементы SAV для хранениня значений Токов */
        SAV Ia;
        SAV Ib;
        SAV Ic;

        /**Элементы SAV для хранениня значений Токов */
        SAV Ua;
        SAV Ub;
        SAV Uc;

    public:
            MySVSB() {
                signals.push_back(Ia);
                signals.push_back(Ib);
                signals.push_back(Ic);
                signals.push_back(Ua);
                signals.push_back(Ub);
                signals.push_back(Uc);
            }
            /**Чтение COMTRADE файлов*/
            void readComtrade(string path) {
                /**Чтение файлов с расширениями .cfg и .dat*/
                string line;
                fstream MyFileCfg;
                MyFileCfg.open(path);

                string s = path;
                s.replace(s.find(".cfg"), 5,".dat");
                fstream MyFileDat;
                MyFileDat.open(s);

                while(getline(MyFileCfg, line)){
                    cfgFileLines.push_back(line);
                }
                while(getline(MyFileDat, line)){
                    datFileLines.push_back(line);
                }


                /**Берём вторую строку COMTRADE файла, делаем сплит по запятой и убираем буквы A и D, далее складываем количество А и D сигналов*/
                string line2 = cfgFileLines[1];
                /** Метод для деления строки */
                char *k = new char[line2.size() + 1];
                strcpy(k, line2.c_str());
                char *p = strtok(k, ",");
                vector<string> line2Mas;

                while (p != NULL) {
                    line2Mas.push_back(p);
                    p = strtok(NULL, ",");
                }
                delete p;
                delete[] k;

                /**Получение количества Аналоговых сигналов*/
                string needle = "A";
                size_t pos;
                while ((pos = line2Mas[1].find(needle)) != line2Mas[1].npos)
                    line2Mas[1].replace(pos, pos + needle.length(), "\"");
                line2Mas[1].erase(2);
                int analogNumber = stoi(line2Mas[1]);

                /**Получение количества Дискретных сигналов*/
                needle = "D";
                while ((pos = line2Mas[2].find(needle)) != line2Mas[2].npos)
                    line2Mas[2].replace(pos, pos + needle.length(), "\"");
                line2Mas[2].erase(2);
                int discretNumber = stoi(line2Mas[2]);

                /** Общее количество сигналов */
                number=analogNumber + discretNumber;

                for (int i = 2; i < (analogNumber + 2); i++) {
                    string line = cfgFileLines[i];
                    /** Метод для деления строки */
                    char *k = new char[line.size() + 1];
                    strcpy(k, line.c_str());
                    char *p = strtok(k, ",");
                    vector<string> lineSplit;
                    while (p != NULL) {
                        lineSplit.push_back(p);
                        p = strtok(NULL, ",");
                    }
                    delete p;
                    delete[] k;
                    a.push_back(stof(lineSplit[3]));
                    b.push_back(stof(lineSplit[4]));
                }
                MyFileCfg.close();
                MyFileDat.close();
            }

            bool NextLine = true;
            bool EndLine = true;

            int scope=0;

            vector<int> GrafIa;
            vector<int> GrafIb;
            vector<int> GrafIc;


            bool Type = true;

            virtual void process() {
                NextLine = true;
                while ((scope != datFileLines.size()) && (NextLine == true)) {
                    string linePars = datFileLines[scope];
                    /** Метод для деления строки */
                    char *k = new char[linePars.size() + 1];
                    strcpy(k, linePars.c_str());
                    char *p = strtok(k, ",");
                    vector<string> line2Numbers;
                    while (p != NULL) {
                        line2Numbers.push_back(p);
                        p = strtok(NULL, ",");
                    }
                    delete p;
                    delete[] k;

                    for (int i = 0; i < number; i++) {
                        float value = stof(line2Numbers[i + 2]);
                        if (i < a.size()) {
                            value = value * a[i] + b[i];
                            value = value * 1000;
                        }

                        if (Type == true) {
                            switch (i) {
                                case 0:
                                    Ia.getInstmag().setvalue(value);
                                    GrafIa.push_back((int) Ia.getInstmag().getvalue());
                                    break;
                                case 1:
                                    Ib.getInstmag().setvalue(value);
                                    GrafIb.push_back((int) Ib.getInstmag().getvalue());
                                    break;
                                case 2:
                                    Ic.getInstmag().setvalue(value);
                                    GrafIc.push_back((int) Ic.getInstmag().getvalue());
                                    break;
                            }
                        } else {
                            switch (i) {
                                case 0:
                                    Ua.getInstmag().setvalue(value);
                                    break;
                                case 1:
                                    Ub.getInstmag().setvalue(value);
                                    break;
                                case 2:
                                    Uc.getInstmag().setvalue(value);
                                    break;
                                case 3:
                                    Ia.getInstmag().setvalue(value);
                                    GrafIa.push_back((int) Ia.getInstmag().getvalue());
                                    break;
                                case 4:
                                    Ib.getInstmag().setvalue(value);
                                    GrafIb.push_back((int) Ib.getInstmag().getvalue());
                                    break;
                                case 5:
                                    Ic.getInstmag().setvalue(value);
                                    GrafIc.push_back((int) Ic.getInstmag().getvalue());
                                    break;
                            }

                        }
                    }
                    NextLine = false;
                    scope++;
                    if (scope == datFileLines.size()) {
                            EndLine = false;
                        }

                }
            }
            void setPastType(bool Types){
                Type=Types;
            }


    /** Метод для отображение сигналов*/
            void showIa(){
                for(int i=0;i<GrafIb.size();i++){
                    cout<<GrafIa[i]<<" "<<GrafIb[i]<<" "<<GrafIc[i]<<endl;
                }
            }

            /** Метод для получения сигналов*/
            vector<SAV> getSignals(){
                return signals;
            }

            bool getEndLine(){
                return EndLine;
            }

             SAV &getIa()  {
                return Ia;
            }


            SAV &getUa() {
                return Ua;
            }

            SAV &getUb() {
                return Ub;
            }

            SAV &getUc() {
                return Uc;
            }

            void setIa(const SAV &ia) {
                Ia = ia;
            }

            SAV &getIb()  {
                return Ib;
            }

            void setIb(const SAV &ib) {
                Ib = ib;
            }

            SAV &getIc()  {
                return Ic;
            }

            void setIc(const SAV &ic) {
                Ic = ic;
            }


};





#endif //MTZ_MYSVSB_H
