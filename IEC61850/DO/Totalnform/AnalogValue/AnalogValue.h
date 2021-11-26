//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_ANALOGVALUE_H
#define MTZ_ANALOGVALUE_H

#include <DATA.h>
#include <BaseType.h>

///<Значение аналогового сигнала
class AnalogValue: public DATA {
    /*!
      * Методы(Getter_Setter)
      * целочисленное значение
      */
    BaseType<int> i ;
    /*!
      * Методы(Getter_Setter)
      * значение с плавающей точкой
      */
    BaseType<float> f;

   /*!
     * Методы(Getter_Setter)
     *Для оценки Масштабного коэффициента
     */
    BaseType<float> scaleFactor;
    /*!
     * Методы(Getter_Setter)
     *Для оценки Смещением
     */
    BaseType<float> offset;
};


#endif //MTZ_ANALOGVALUE_H
