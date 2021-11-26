//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_CSWI_H
#define MTZ_CSWI_H


#include <LN.h>
#include <DPC.h>
#include <ACT.h>

#include <iostream>
#include <vector>
using namespace std;

/** Регулятор переключений */
class CSWI: public LN {
    /** Локальная операция */
    //SPS Loc;
    /** Счетчик числа переключений со сбросом */
    //INC OpCntRs;
    /** Данные по управлению */
    /** Выключатель, общий */
    DPC Pos;
    /** Выключатель L1 */
    DPC PosA;
    /** Выключатель L2 */
    DPC PosB;
    /** Выключатель L3 */
    DPC PosC;
    /** Действие "Отключить выключатель" */
    ACT* OpOpn;

    ACT OpCls;
public:

    vector<int> GrafPos;

    void process(){
        /** При условии срабатывания защиты и включенного положения выключателя подается команда на отключение выключателя */

        if(OpOpn->getGeneral().getvalue() && Pos.getStVal().getvalue() == 2){
            Pos.getCtIVal().setvalue(false);
        }

        GrafPos.push_back(Pos.getCtIVal().getvalue());
    }

    DPC &getPos(){
        return Pos;
    }

    void setPos(const DPC &pos) {
        Pos = pos;
    }

    const DPC &getPosA() const {
        return PosA;
    }

    void setPosA(const DPC &posA) {
        PosA = posA;
    }

    const DPC &getPosB() const {
        return PosB;
    }

    void setPosB(const DPC &posB) {
        PosB = posB;
    }

    const DPC &getPosC() const {
        return PosC;
    }

    void setPosC(const DPC &posC) {
        PosC = posC;
    }


    void setOpOpn(ACT *opOpn) {
        CSWI::OpOpn = (ACT *) opOpn;
    }



    const ACT &getOpCls() const {
        return OpCls;
    }

    void setOpCls(const ACT &opCls) {
        OpCls = opCls;
    }


};


#endif //MTZ_CSWI_H
