//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_HDEL_H
#define MTZ_HDEL_H

#include <DATA.h>
#include <BaseType.h>

///< Значение гармоник для треугольника
class HDEL: public DATA {
    ///<измеряемые величины
    ///<Основные
    //BaseType <Quality> q; //Для оценки качества
    //BaseType<TimeStamp> t; //Для отслеживания времени

    ///<Гармоники и Интергармоники
    //BaseType<Vector> phsABHar[numHar];
    //BaseType<Vector> phsBCHar[numHar];
    //BaseType<Vector> phsCAHar[numHar];

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


#endif //MTZ_HDEL_H
