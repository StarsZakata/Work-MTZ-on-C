//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_CTIMODELS_H
#define MTZ_CTIMODELS_H

#include <DATA.h>
#include <BaseType.h>

///< Модели управления
class CtIModels: public DATA {
    class CTI{
        enum ENUMERATED {
            unknown,///<неизвестное
            forward,///<прямое
            backward,///<обратное
            both    ///<оба
        };
    };
    //BaseType<CTI> CtIModels;
};


#endif //MTZ_CTIMODELS_H
