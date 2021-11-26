//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_CMV_H
#define MTZ_CMV_H

#include <DATA.h>
#include <Vector.h>

///< Комплексное измеренное значение
class CMV: public DATA {
private:
    ///<измеряемые атрибуты
    //BaseType<Vector> instCVal;
    Vector cVal;
    //BaseType <Quality> q; //Для оценки качества
    //BaseType<TimeStamp> t; //Для отслеживания времени
    /*
    class RANGE{
        enum struct ENUMERATED{
            normal,///<нормальное
            high,///<высокое
            low,///<низкое
            highHigh,///<крайний верхний предел
            lowLow  ///<крайний низкий предел
        };
    };
     */
    //BaseType<RANGE> range;
    ///<замещение
    /*
    BaseType<bool> subEna;
    BaseType<Vector> subCVal;
    BaseType<Quality> subQ;
    BaseType<string> subID;
    */
    ///<Конфигурация, описание и расширение
    /*
    BaseType<Unit> units;
    BaseType<int> db;
    BaseType<int> zeroDb;
    BaseType<RangeConfiguration> rangeC;
    BaseType<ScaledValueConfig> magSVC;
    BaseType<ScaledValueConfig> angSVC
    BaseType<ANGREF> angRef;
    BaseType<int> smpRate;
    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
    */

public:
Vector &getCVal();

void setCVal(const Vector &cVal);
};


#endif //MTZ_CMV_H
