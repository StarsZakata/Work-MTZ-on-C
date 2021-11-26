//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_XCBR_H
#define MTZ_XCBR_H

#include <LN.h>
#include <DPC.h>

#include <iostream>
#include <vector>
using namespace std;

/** Выключатель */
class XCBR:public LN {


    /** Локальная операция */
    //SPS Loc;
    /** Состояние работоспособности внешеного оборудования */
     //INS EEHealth;
    /** Паспортная табличка внешнего оборудования */
     //DPL EEName;
    /** Счетчик числа переключений */
     //INS OpCnt;

    /** Блокировка отключения */
     //SPC BlkOpn;
    /** Блокировка включения */
     //SPC BlkCls;
    /** Двигатель зарядного устройства включен */
     //SPC ChaMotEna;

    /** Измеренные значения */

    /** Общее количесвто переключаемых амперов, со сбросом */
     //BCR SumSwARs;

    /** Информация о статусе */

    /** Функциональные возможности выключателя */
    //INS CBOpCap;
    /** Возможности переключения по совпаданию фазы */
     //INS POWCap;
    /** Функциональные характеристики выключателя при полной нагрузке */
    //INS MaxOpCap;


    /** Положение переключателя */
    DPC *Pos;
    /** Время включения/отключения выключателя */
    float timeBreaker=0;


    void process(){
        if (!Pos->getCtIVal().getvalue() && Pos->getStVal().getvalue() == 2) {
            timeBreaker++;

        }
        if (Pos->getCtIVal().getvalue() && Pos->getStVal().getvalue() == 1) {
            timeBreaker++;
        }

        /** Если время после подачи команды на выключатель превысело его время срабатывания */
        if (timeBreaker > 100) {
            timeBreaker = 0;
            /** То если команда на включение, он включается */
            if (Pos->getCtIVal().getvalue()) {
                Pos->getCtIVal().setvalue(true);
            }
            /** То если команда на отключение, он отключается */
            if (!Pos->getCtIVal().getvalue()) {
                Pos->getCtIVal().setvalue(false);
            }
        }
        GrafPosBreaker.push_back(Pos->getCtIVal().getvalue());
    }

public:

    void setPos(DPC *pos) {
        XCBR::Pos = (DPC *)pos;
    }
    float getTimeBreaker() const {
        return timeBreaker;
    }
    void setTimeBreaker(float timeBreaker) {
        XCBR::timeBreaker = timeBreaker;
    }

    vector<int> GrafPosBreaker;
};


#endif //MTZ_XCBR_H
