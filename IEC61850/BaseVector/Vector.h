 //
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_VECTOR_H
#define MTZ_VECTOR_H

#include <DATA.h>
#include <BaseType.h>

#include <cmath>

#include <iostream>
#include <string>

 using namespace std;

class Vector: public DATA {
private:

       BaseType<float> mag;

       BaseType<float> ang;

       BaseType<float> ortX;

       BaseType<float> ortY;


        /**
        * Задать вектор по модулю и углу(градусу)
        * @param magValue  модуль
        * @param angValue  угол(градус)
        */
    public:
        void setValueD(float magValue, float angValue) {
            mag.setvalue(magValue);
            ang.setvalue(angValue);
            ortX.setvalue((float) (magValue * cos(angValue/180 *M_PI)));
            ortY.setvalue((float) (magValue * sin(angValue/180 *M_PI)));
        }


         /**
         * Задать вектор по ортогональным составляющим
         * @param Ox проектция на Х
         * @param Oy проектция на Y
         */

         void setValue0(float Ox, float Oy) {
             mag.setvalue((float)(sqrt(Ox * Ox + Oy * Oy)));
             ang.setvalue((float)(atan2(Oy,Ox)*180.0/M_PI));
             ortX.setvalue(Ox);
             ortY.setvalue(Oy);
         }




    BaseType<float> &getMag();

    BaseType<float> &getAng();

    BaseType<float> &getOrtX();

    BaseType<float> &getOrtY();

};


#endif //MTZ_VECTOR_H
