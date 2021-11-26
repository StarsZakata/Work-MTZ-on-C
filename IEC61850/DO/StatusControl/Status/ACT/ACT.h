//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_ACT_H
#define MTZ_ACT_H

#include <DATA.h>
#include <BaseType.h>

///< Сведения об активации защиты
class ACT: public DATA {

    private:
        BaseType<bool> general;
        BaseType<bool> PhsA;
        BaseType<bool> PhsB;
        BaseType<bool> PhsC;
        BaseType<bool> Neut;


        //BaseType <Quality> q; //Для оценки качества
        //BaseType<TimeStamp> t; //Для отслеживания времени

    ///<Конфигурация, описание и расширение
        /*
       BaseType<TimeStamp> operTm; //Для отслеживания времени
       BaseType<std::string> d;
       BaseType<std::string> dU;
       BaseType<std::string> cdcNs;
       BaseType<std::string> cdcName;
       BaseType<std::string> dataNs;
       */




public:
    BaseType<bool> &getGeneral();

    void setGeneral(const BaseType<bool> &general);

    BaseType<bool> &getPhsA();

    void setPhsA(const BaseType<bool> &phsA);

    BaseType<bool> &getPhsB();

    void setPhsB(const BaseType<bool> &phsB);

    BaseType<bool> &getPhsC();

    void setPhsC(const BaseType<bool> &phsC);

    const BaseType<bool> &getNeut() const;

    void setNeut(const BaseType<bool> &neut);
};


#endif //MTZ_ACT_H
