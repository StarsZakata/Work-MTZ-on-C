//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_ACD_H
#define MTZ_ACD_H



#include <DATA.h>
#include <BaseType.h>
#include <cstddef>

class ACD:public DATA {
private:
    // TODO правильно-ли я сделал(посмотреть по коду)
    /** Направление
     * 0-неизвестно
     * 1-прямое
     * 2-обратное
     * 3-оба
     * */
    // todo в идеале должны быть std::bute
    BaseType<bool> dirGeneral;
    BaseType<bool> general;

    BaseType<bool> PhsA;
    //BaseType<byte> dirPhsA;

    BaseType<bool> PhsB;
    //BaseType<byte> dirPhsB;

    BaseType<bool> PhsC;
    //BaseType<byte> dirPhsC;

    BaseType<bool> Neut;
    //BaseType<byte> dirNeut;

    //BaseType <Quality> q; //Для оценки качества
    //BaseType<TimeStamp> t; //Для отслеживания времени

    ///<Конфигурация, описание и расширение
    /*
   BaseType<std::string> d;
   BaseType<std::string> dU;
   BaseType<std::string> cdcNs;
   BaseType<std::string> cdcName;
   BaseType<std::string> dataNs;
   */

public:
    BaseType<bool> &getDirGeneral();

    void setDirGeneral(const BaseType<bool> &dirGeneral);

    BaseType<bool> &getGeneral();

    void setGeneral(const BaseType<bool> &general);

    BaseType<bool> &getPhsA();

    void setPhsA(const BaseType<bool> &phsA);

    BaseType<bool> &getPhsB();

    void setPhsB(const BaseType<bool> &phsB);

    BaseType<bool> &getPhsC();

    void setPhsC(const BaseType<bool> &phsC);

    BaseType<bool> &getNeut();

    void setNeut(const BaseType<bool> &neut);

};


#endif //MTZ_ACD_H
