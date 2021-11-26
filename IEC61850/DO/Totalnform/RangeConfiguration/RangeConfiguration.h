//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_RANGECONFIGURATION_H
#define MTZ_RANGECONFIGURATION_H

#include <DATA.h>
#include <BaseType.h>
#include <AnalogValue.h>

///<Для конфигурации предельных значений, определяющих диапазон измеренного значения
class RangeConfiguration: public DATA {
    /*!
      * Параметры Конфигурирования
      * Применяется в контексте атрибута диапазона
      */
       //BaseType<AnalogValue> hhLim;
       //BaseType<AnalogValue> hLim;
       //BaseType<AnalogValue> ILim;
       //BaseType<AnalogValue> IILim;

        /*!
         *Представляет минимальное измерение процесса
         * Для который значение i или f рассматривается в области предельных значений процесса
         */
        //BaseType<AnalogValue> min;
        /*!
         * Представляет максимальное измеренное процесса
         * Для которого значение i или f рассматриается в области предельных значений.
         */
        //BaseType<AnalogValue> max;
};


#endif //MTZ_RANGECONFIGURATION_H
