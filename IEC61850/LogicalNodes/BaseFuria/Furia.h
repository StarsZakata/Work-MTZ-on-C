//
// Created by sergey on 05.10.2021.
//

#ifndef CLION_FURIA_H
#define CLION_FURIA_H

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

#include <BaseType.h>
#include <Vector.h>

using namespace std;

class Furie {
private:
    ///< Количество выборок значений за период (частота дискретизации)
    const int N = 80;
    ///< Значения для синусов
    vector<float> sinus;
    ///< Значения для косинусов
    vector<float> cosinus;
    ///< Реализация, плавающего окна
    int schtk = 0;
    ///< Значения в проекциях на Ось X и Y
    float Sx = 0.0;
    float Sy = 0.0;
    ///< Буфер, для хранения значений
    //todo инициализация переменной
    vector<float> bufferX;
    vector<float> bufferY;
    //float bufferX[80];
    //float bufferY[80];
    float bk=0.0;
    float ak=0.0;
    float k= (float) (sqrt(2.0) / 80.0);
public:
    ///< Конструктор класс, с необходимым номером гармоники
    Furie(){
        for (int i=0; i<N; i++){
            sinus.push_back( (float) sin((2.0*M_PI*i*1.0)/80.0));
            cosinus.push_back( (float) cos((2.0*M_PI*i*1.0)/80.0));
            bufferX.push_back(0.0);
            bufferY.push_back(0.0);
        }
    }

    ///<Метод, для расчет Фильтра Фурье
    void FurieProcess(BaseType<float> instMag, Vector* vector){
        /** Ортогональные состовляющие по  Оси X и Y*/
        bk = instMag.getvalue() * sinus[schtk];
        ak = instMag.getvalue() * cosinus[schtk];
        /** Сумма всех ортогональных состовляющих с вычетом предыдущего значения для сдвига плавующего окна */
        Sx += (bk - bufferX[schtk]);
        bufferX[schtk] = bk;
        Sy += (ak - bufferY[schtk]);
        bufferY[schtk] = ak;
        /** Передаем ортогональные составляющие в Vector */
        vector->setValue0(Sx*k,Sy*k);
        /** При достижении значения частоты дискретизации, начинаем заново */
        ++schtk;
        if (schtk > N-1){
            schtk = 0;
        }
    }
};


#endif //CLION_FURIA_H
