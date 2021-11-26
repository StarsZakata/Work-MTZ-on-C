//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_SPS_H
#define MTZ_SPS_H

#include <DATA.h>
#include <BaseType.h>

///< Недублированное состояние
class SPS:public DATA {

    /*!
     * Состояние
     */
    BaseType<bool> stVal;



    //BaseType <Quality> q; //Для оценки качества
    //BaseType<TimeStamp> t; //Для отслеживания времени
    ///<Замещение
    /*
    BaseType<bool> subEna;
    BaseType<bool> subVal;
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
    const BaseType<bool> &getStVal() const;

    void setStVal(const BaseType<bool> &stVal);
};


#endif //MTZ_SPS_H
