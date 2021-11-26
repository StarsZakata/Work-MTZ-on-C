//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_VALWITHTRANS_H
#define MTZ_VALWITHTRANS_H

#include <DATA.h>
#include <BaseType.h>

///<Многопозиционная сигнализация с индикацией переходного состояния
class ValWithTrans: public DATA {
    /*!
    * Содержит положение шагового механизма
    */
    BaseType<int> posVal;
    /*!
     * Указывает, что оборудование
     * Находится в переходном состоянии
     */
    BaseType<bool> translnd;
};


#endif //MTZ_VALWITHTRANS_H
