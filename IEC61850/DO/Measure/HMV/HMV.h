//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_HMV_H
#define MTZ_HMV_H

#include <DATA.h>
#include <BaseType.h>
#include <Vector.h>

///< Значение Гармоник
class HMV:public DATA {
private:
    ///<Измеряемые атрибуты
    ///<Основные
    //BaseType <Quality> q; //Для оценки качества
    //BaseType<TimeStamp> t; //Для отслеживания времени
    ///<Гармоники и Интергармоники
    //BaseType<Vector> har[numHar];
    ///<Конфигурация, описание и расширение
    /*
    BaseType<int> numHar;
    BaseType<int> numCyc;
    BaseType<int> evalTm;
    BaseType<Unit> units;
    BaseType<int> smpRate;
    BaseType<float> frequency;
    class HVREF{
        enum struct ENUMERATED {
            fundamental,///<основная
            rms,///<среднеквадратичная
            absolute///<абсолютная
        };
    };
    HVREF hvRef;
    BaseType<int> rmsCyc;
    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
     */

};


#endif //MTZ_HMV_H
