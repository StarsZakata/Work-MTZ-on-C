//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_SAV_H
#define MTZ_SAV_H

#include <DATA.h>
#include <BaseType.h>

///< Выборочные значения
class SAV:public DATA {
    ///<Измеряемые атрибуты
    BaseType<float> instmag;
    //BaseType <Quality> q; //Для оценки качества
    //BaseType<TimeStamp> t; //Для отслеживания времени

    ///<Конфигурация, описание и расширение
    /*
    BaseType<Unit> units;
    BaseType<ScaledValueConfig> sVC
    BaseType<AnalogValue> min;
    BaseType<AnalogValue> max;
    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
     */


public:
    BaseType<float> &getInstmag() ;

    void setInstmag(const BaseType<float> &instmag);
};


#endif //MTZ_SAV_H
