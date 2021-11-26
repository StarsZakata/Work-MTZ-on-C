//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_MV_H
#define MTZ_MV_H

#include <DATA.h>
#include <BaseType.h>

///< Измеряемое значение
class MV: public DATA {
    ///<измеряемые атрибуты
    //BaseTypes<AnalogValue> instMag
    BaseType<float> mag;
    class RANGE{
        enum struct ENUMERATED{
            normal,///<нормальное
            high,///<высокое
            low,///<низкое
            highHigh,///<крайний верхний предел
            lowLow  ///<крайний низкий предел
        };
    };
    //BaseType<RANGE> range;
    //BaseType <Quality> q; //Для оценки качества
    //BaseType<TimeStamp> t; //Для отслеживания времени

    ///<Замещение
    /*
    BaseType<bool> subEna;
    BaseType<AnalogValue> subMag;
    BaseType<Quality> subQ;
    BaseType<string> subID;
     */
    ///<Конфигурация, описание и расширение
    /*
    BaseType<Unit> units;
    BaseType<int> db;
    BaseType<int> zeroDb;
    BaseType<ScaledValueConfig> sVC;
    BaseType<RangeConfiguration> rangeC;
    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
     */


public:
    BaseType<float> &getMag();

    void setMag(const BaseType<float> &mag);

};


#endif //MTZ_MV_H
