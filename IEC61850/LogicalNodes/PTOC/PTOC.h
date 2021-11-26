//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_PTOC_H
#define MTZ_PTOC_H

#include <LN.h>

#include <ACT.h>
#include <ASG.h>
#include <ING.h>
#include <WYE.h>
#include <ACD.h>

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/** Максимальная токовая защита с выдержкой времени */
class PTOC:public LN {

private:
        /** Пуск */
        ACD Str;
        /** Срабатывание */
        ACT Op;
        /** Динамические характеристики графика */
        //CSD TmASt;
        /** Тип рабочих характеристик графика */
        //CURVE TmACrv;
        /** Начальное значение */
        ASG StrVal;
        /** Умножитель уставок времени */
         //ASG TmMult;
        /** Минимальное время срабатывания */
        //  ING MinOpTmms;
        /** Максимальное время срабатывания */
        // ING MaxOpTmms;
        /** Время задержки срабатывания */
        ING OpDITmms;
        /** Тип графика сброса */
        //ING TypRsCrv;
        /** Время задержки сброса */
        //ING RsDITmms;
        /** Режим направленной защиты */
        ING DirMod;


        /** Фазные токи */
        WYE *A;
        ACD dir;
        /** Время после пуска */
        float timeA=0,timeB=0,timeC=0;

public:
    vector<int> GrafOpGeneral;
    vector<int> GrafSrabativania;
    vector<int> GrafUstka;

    virtual void process(){
            /** Пуск защиты пофазно при условии, что величина тока больше уставки */
            Str.getPhsA().setvalue(A->getPhsA().getCVal().getMag().getvalue() > StrVal.getSetVal().getvalue());
            Str.getPhsB().setvalue(A->getPhsB().getCVal().getMag().getvalue() > StrVal.getSetVal().getvalue());
            Str.getPhsC().setvalue(A->getPhsC().getCVal().getMag().getvalue() > StrVal.getSetVal().getvalue());
            GrafUstka.push_back(StrVal.getSetVal().getvalue());
            GrafSrabativania.push_back(Str.getPhsA().getvalue());
            /** В случае пуска защиты добавляется время для реализации выдержки времени */
            if (Str.getPhsA().getvalue()) {
                timeA += 0.75;
            }
            else {
                timeA = 0;
            }
            if (Str.getPhsB().getvalue()) {
                timeB += 0.25;
            }
            else {
                timeB = 0;
            }
            if (Str.getPhsC().getvalue()) {
                timeC += 0.25;
            }
            else {
                timeC = 0;
            }
            /**Обнуление направленной ступени, в случае, если КЗ за спиной*/
            /*
            if (DirMod.getSetVal().getvalue() == 1) {
                if ((dir.getPhsA().getvalue() == 2)) {
                    timeA = 0;
                }
                if (dir.getPhsB().getvalue() == 2) {
                    timeB = 0;
                }
                if (dir.getPhsC().getvalue() == 2) {
                    timeC = 0;
                }
            }
            */
            /** Когда время после пуска защиты оказывается больше уставки по времени происходит срабатывание защиты */
            Op.getPhsA().setvalue(timeA > OpDITmms.getSetVal().getvalue());
            Op.getPhsB().setvalue(timeB > OpDITmms.getSetVal().getvalue());
            Op.getPhsC().setvalue(timeC > OpDITmms.getSetVal().getvalue());
            Op.getGeneral().setvalue(Op.getPhsA().getvalue() || Op.getPhsB().getvalue() || Op.getPhsC().getvalue());

            GrafOpGeneral.push_back(Op.getGeneral().getvalue());

    }


    const ACD &getStr() const {
        return Str;
    }

    void setStr(const ACD &str) {
        Str = str;
    }

    ACT &getOp() {
        return Op;
    }

    void setOp(const ACT &op) {
        Op = op;
    }

    ASG &getStrVal() {
        return StrVal;
    }

    void setStrVal(const ASG &strVal) {
        StrVal = strVal;
    }

    ING &getOpDITmms() {
        return OpDITmms;
    }

    void setOpDITmmss(const ING &opDITmms) {
        OpDITmms = opDITmms;
    }

    ING &getDirMod() {
        return DirMod;
    }

    void setDirMod(const ING &dirMod) {
        DirMod = dirMod;
    }

    void setA(WYE *a) {
        PTOC::A = (WYE *) a;
    }




    const ACD &getDir() const {
        return dir;
    }

    void setDir(const ACD &dir) {
        PTOC::dir = dir;
    }

};


#endif //MTZ_PTOC_H
