//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_HWYE_H
#define MTZ_HWYE_H

#include <DATA.h>
#include <BaseType.h>

///< Значение гармоник для Звезды
class HWYE: public DATA {
    ///<измеряемые атрибуты
    ///<Основные
    //BaseType <Quality> q; //Для оценки качества
    //BaseType<TimeStamp> t; //Для отслеживания времени
    ///<Гармоники и Интергармоники
    //BaseType<Vector> phsAHar[numHar];
    //BaseType<Vector> phsBHar[numHar];
    //BaseType<Vector> phsCHar[numHar];
    //BaseType<Vector> neutHar[numHar];
    //BaseType<Vector> netHar[numHar];
    //BaseType<Vector> resHar[numHar];

    ///<Конфигурация, описание и расширение
    /*
    BaseType<int> numHar;
    BaseType<int> numCyc;
    BaseType<int> evalTm;
    BaseType<Unit> units;
    BaseType<int> smpRate;
    BaseType<float> frequency;
    class ANGREF{
        enum struct ENUMERATED {
            Va,
            Vb,
            Vc,
            Aa,
            Ab,
            Ac,
            Vab,
            Vbc,
            Vca,
            Vother,
            Aothet
        };
    };
    ANGREF angRef;
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


#endif //MTZ_HWYE_H
