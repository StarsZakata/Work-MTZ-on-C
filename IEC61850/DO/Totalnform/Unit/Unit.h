//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_UNIT_H
#define MTZ_UNIT_H

#include <DATA.h>
#include <BaseType.h>

///< Единица измерения
class Unit: public DATA {
    /*!
     * Определяет физические величины в системах единициах СИ
     * в соответсвиее с приложением А таблица А1-А4
     */
    enum struct SlUnit{

    };
    /*!
     * Определяет значение множителя в соответствии с приложением А Таблица А-5
     * По умлочанию рвно 0 (т.е. множитель=1)
     */
    enum struct multiplier{

    };
};


#endif //MTZ_UNIT_H
