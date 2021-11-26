//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_INS_H
#define MTZ_INS_H

#include <DATA.h>
#include <BaseType.h>


///< Целочисленное состояние
class INS:public DATA {

    ///<Состояние
    BaseType<int> stVal;

    //BaseType <Quality> q; //Для оценки качества
    //BaseType<TimeStamp> t; //Для отслеживания времени
    ///<Замещение
    /*
    BaseType<bool> subEna;
    BaseType<int> subVal;
    BaseType<Quality> subQ;
    BaseType<std::string> subID;
     */
    ///<Конфигурация, описание и расширение
    /*
    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
    */

public:
    const BaseType<int> &getStVal() const;

    void setStVal(const BaseType<int> &stVal);
};


#endif //MTZ_INS_H
