//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_BCR_H
#define MTZ_BCR_H

#include <DATA.h>
#include <BaseType.h>

///< Считывание показаний двоичного счетчика
class BCR: public DATA {
    /*!
    * Состояние
    */
    BaseType<int> actVal;
    BaseType<int> frVal;
    //BaseType<TimeStamp> frTm;

    //BaseType <Quality> q; //Для оценки качества
    //BaseType<TimeStamp> t; //Для отслеживания времени

    ///<Конфигурация, описание и расширение
    /*
    BaseType<Unit> units;
    BaseType<float> puIsQty;
    BaseType<bool> BOOLEAN;
    BaseType<TimeStamp> strTm;
    BaseType<int> frPd;
    BaseType<bool> frRs;
    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
    */
};


#endif //MTZ_BCR_H
