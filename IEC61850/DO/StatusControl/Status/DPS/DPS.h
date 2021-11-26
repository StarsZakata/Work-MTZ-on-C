//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_DPS_H
#define MTZ_DPS_H

#include <DATA.h>
#include <cstddef>
#include <BaseType.h>

///<Дублированное состояние
class DPS:public DATA{
    /** Состояние выключателя
     * 00-неопределенное(0)
     * 01-отключено(1)
     * 10-включено(2)
     * 11-ошибка (3) */
    BaseType<std::byte> stVal;


    //BaseType <Quality> q; //Для оценки качества
    //BaseType<TimeStamp> t; //Для отслеживания времени

    ///<Замещение
    /*
    BaseType<bool> subEna;
    subVal CODED ENUM
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
    const BaseType<std::byte> &getStVal() const;

    void setStVal(const BaseType<std::byte> &stVal);


};


#endif //MTZ_DPS_H
