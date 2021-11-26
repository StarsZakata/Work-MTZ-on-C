//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_SBOCLASSE_H
#define MTZ_SBOCLASSE_H

#include <DATA.h>
#include <BaseType.h>

///< Модели управления
class SboClasse: public DATA {
public:
    class CBO {
        enum struct ENUMERATED {
            operateOnce,
            operateMany
        };
    };
    //BaseType<CBO> SboClasse;

};


#endif //MTZ_SBOCLASSE_H
