//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_POINT_H
#define MTZ_POINT_H

#include <DATA.h>
#include <BaseType.h>

///<Точка
class Point: public DATA {
    /*!
     * Значение Координаты Х точки кривой
    */
    BaseType<float> xVal;
    /*!
     * Значение координаты Y точки кривой
     */
    BaseType<float> yVal;

};


#endif //MTZ_POINT_H
