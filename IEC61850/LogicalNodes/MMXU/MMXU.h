//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_MMXU_H
#define MTZ_MMXU_H
#include <LN.h>
#include <vector>

#include <MV.h>
#include <WYE.h>
#include <SAV.h>
#include <DEL.h>

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <Furia.h>

using namespace std;

/** Измерения */
class MMXU:public LN {
    // выходные параметры
    ///<Суммарная активная мощность (суммарная Р)
    MV TotW;
    ///<Суммарная реактивная мощность (суммарная Q)
    MV TotVAr;
    ///<Суммарная фиксируемая мощность (суммарная S)
    MV TotVA;
    ///<Средний коэффициент мощности (суммарный коэффициент мощности PF)
    MV TotPF;
    ///<Частота
    MV Hz;
    ///<Линейное напряжение
    DEL PPV;
    ///<Фазное напряжение
    WYE PhV;
    ///<Фазные токи
    WYE A;
    ///<Активная мощность фазы (Р)
    WYE W;
    ///<Реактивная мощность фазы (Q)
    WYE Var;
    ///<Фиксируемая мощность фазы (S)
    WYE VA;
    ///<Коэффициент мощности фазы
    WYE PF;
    ///<Междуфазное сопротивлеине
    DEL Zpp;
    ///<Полное сопротивление фазы
    WYE Z;

    /////Измеренные значения (входные параметры)
    SAV *instIa;///<мгновенные значения тока А
    SAV *instIb;///<мгновенные значения тока В
    SAV *instIc;///<мгновенные значения тока С
    /////
    SAV *instUa;///<мгновенные значения тока А
    SAV *instUb;///<мгновенные значения тока В
    SAV *instUc;///<мгновенные значения тока С
    /////
    /////Класс Фильтра Фурье для МТЗ
    /////
    Furie IaF;
    //Furie IbF;
    //Furie IcF;
    /////
    //Furie UaF;
    //Furie UbF;
    //Furie UcF;
    /////
public:
    /** Определение Действующих значений из Принятых значений в SAV и Запись значений */
    vector<int> GrafAFuria;
    vector<int> GrafBFuria;
    vector<int> GrafCFuria;


    virtual void process(){
        /** Преобразование мгновенных значений фазных токов в действующие, имеющие как модуль, так и фазу */
        IaF.FurieProcess(instIa->getInstmag(),&A.getPhsA().getCVal());

        GrafAFuria.push_back(A.getPhsA().getCVal().getMag().getvalue());

        //IbF.FurieProcess(instIb->getInstmag(),&A.getPhsB().getCVal());
        //GrafBFuria.push_back((int)A.getPhsB().getCVal().getMag().getvalue());

        //IcF.FurieProcess(instIc->getInstmag(),&A.getPhsC().getCVal());
        //GrafCFuria.push_back((int)A.getPhsC().getCVal().getMag().getvalue());

    }


    void Create(){
        /** Преобразование мгновенных значений фазных напряжений в действующие, имеющие как модуль, так и фазу */
        //UaF.FurieProcess(instUa->getInstmag(), &PhV.getPhsA().getCVal());
        //UbF.FurieProcess(instUb->getInstmag(), &PhV.getPhsB().getCVal());
        //UcF.FurieProcess(instUc->getInstmag(), &PhV.getPhsC().getCVal());

        /** Фазные токи и напряжения */
        float Ia = A.getPhsA().getCVal().getMag().getvalue();
        float phiIa = A.getPhsA().getCVal().getAng().getvalue();
        float Ib = A.getPhsB().getCVal().getMag().getvalue();
        float phiIb = A.getPhsB().getCVal().getAng().getvalue();
        float Ic = A.getPhsC().getCVal().getMag().getvalue();
        float phiIc = A.getPhsC().getCVal().getAng().getvalue();

        float Ua = PhV.getPhsA().getCVal().getMag().getvalue();
        float phiUa = PhV.getPhsA().getCVal().getAng().getvalue();
        float Ub = PhV.getPhsB().getCVal().getMag().getvalue();
        float phiUb = PhV.getPhsB().getCVal().getAng().getvalue();
        float Uc = PhV.getPhsC().getCVal().getMag().getvalue();
        float phiUc = PhV.getPhsC().getCVal().getAng().getvalue();

        /** Ортогональные составляющие фазных напряжений */
        float UaX = PhV.getPhsA().getCVal().getOrtX().getvalue();
        float UaY = PhV.getPhsA().getCVal().getOrtY().getvalue();
        float UbX = PhV.getPhsB().getCVal().getOrtX().getvalue();
        float UbY = PhV.getPhsB().getCVal().getOrtY().getvalue();
        float UcX = PhV.getPhsC().getCVal().getOrtX().getvalue();
        float UcY = PhV.getPhsC().getCVal().getOrtY().getvalue();

        /** Ортогональные составляющие фазных токов */
        float IaX = A.getPhsA().getCVal().getOrtX().getvalue();
        float IaY = A.getPhsA().getCVal().getOrtY().getvalue();
        float IbX = A.getPhsB().getCVal().getOrtX().getvalue();
        float IbY = A.getPhsB().getCVal().getOrtY().getvalue();
        float IcX = A.getPhsC().getCVal().getOrtX().getvalue();
        float IcY = A.getPhsC().getCVal().getOrtY().getvalue();

        /** Ортогональные составляющие линейных напряжений */
        float UabX = UaX - UbX;
        float UabY = UaY - UbY;
        float UbcX = UbX - UcX;
        float UbcY = UbY - UcY;
        float UcaX = UcX - UaX;
        float UcaY = UcY - UaY;

        /** Ортогональные составляющие линейных токов */
        float IabX = IaX - IbX;
        float IabY = IaY - IbY;
        float IbcX = IbX - IcX;
        float IbcY = IbY - IcY;
        float IcaX = IcX - IaX;
        float IcaY = IcY - IaY;

        /** Задаем в стандартные переменные */
        PPV.getPhsAb().getCVal().setValue0(UabX, UabY);
        PPV.getPhsBc().getCVal().setValue0(UbcX, UbcY);
        PPV.getPhsCa().getCVal().setValue0(UcaX, UcaY);

        /** Полная мощность */
        float Sa = Ua * Ia;
        float Sb = Ub * Ib;
        float Sc = Uc * Ic;
        float S = Sa + Sb + Sc;

        /** Задаем в стандартные переменные */
        VA.getPhsA().getCVal().getMag().setvalue(Sa);
        VA.getPhsB().getCVal().getMag().setvalue(Sb);
        VA.getPhsC().getCVal().getMag().setvalue(Sc);
        TotVA.getMag().setvalue(S);

        /** Углы между напряжениями и токами */
        float phiA = phiUa - phiIa;
        float phiB = phiUb - phiIb;
        float phiC = phiUc - phiIc;

        float cosPhiA = (float) cos(phiA*180.0/M_PI);
        float cosPhiB = (float) cos(phiB*180.0/M_PI);
        float cosPhiC = (float) cos(phiC*180.0/M_PI);
        float cosPhi = (cosPhiA + cosPhiB + cosPhiC) / 3;

        float sinPhiA = (float) sin(phiA*180.0/M_PI);
        float sinPhiB = (float) sin(phiB*180.0/M_PI);
        float sinPhiC = (float) sin(phiC*180.0/M_PI);
        float sinPhi = (sinPhiA + sinPhiB + sinPhiC) / 3;

        /** Задаем в стандартные переменные */
        PF.getPhsA().getCVal().getMag().setvalue(cosPhiA);
        PF.getPhsB().getCVal().getMag().setvalue(cosPhiB);
        PF.getPhsC().getCVal().getMag().setvalue(cosPhiC);
        TotPF.getMag().setvalue(cosPhi);

        W.getPhsA().getCVal().getMag().setvalue(Sa * cosPhiA);
        W.getPhsB().getCVal().getMag().setvalue(Sb * cosPhiB);
        W.getPhsC().getCVal().getMag().setvalue(Sc * cosPhiC);
        TotW.getMag().setvalue(S * cosPhi);

        Var.getPhsA().getCVal().getMag().setvalue(Sa * sinPhiA);
        Var.getPhsB().getCVal().getMag().setvalue(Sb * sinPhiB);
        Var.getPhsC().getCVal().getMag().setvalue(Sc * sinPhiC);
        TotVAr.getMag().setvalue(S * sinPhi);

        /** Фазные сопротивления */
        float Za = Ua / Ia;
        float Zb = Ub / Ib;
        float Zc = Uc / Ic;

        /** Задаем в стандартные переменные */
        Z.getPhsA().getCVal().setValueD(Za, phiA);
        Z.getPhsB().getCVal().setValueD(Zb, phiB);
        Z.getPhsC().getCVal().setValueD(Zc, phiC);

        /** Фазные сопротивления */
        float ZabX = UabX / IabX;
        float ZabY = UabY / IabY;
        float ZbcX = UbcX / IbcX;
        float ZbcY = UbcY / IbcY;
        float ZcaX = UcaX / IcaX;
        float ZcaY = UcaY / IcaY;

        /** Задаем в стандартные переменные */
        Zpp.getPhsAb().getCVal().setValue0(ZabX, ZabY);
        Zpp.getPhsBc().getCVal().setValue0(ZbcX, ZbcY);
        Zpp.getPhsCa().getCVal().setValue0(ZcaX, ZcaY);
    }




    WYE &getA() {
        return A;
    }

    WYE &getW() {
        return W;
    }


    void setInstIa(SAV *instIas) {
        MMXU::instIa = (SAV *) instIas;
    }

    void setInstIb(SAV *instIbs) {
        MMXU::instIb = (SAV *) instIbs;
    }

    void setInstIc(SAV *instIcs) {
        MMXU::instIc = (SAV *) instIcs;
    }

    void setInstUa(SAV *instUas) {
        MMXU::instUa = (SAV *) instUas;
    }

    void setInstUb(SAV *instUbs) {
        MMXU::instUb = (SAV *) instUbs;
    }

    void setInstUc(SAV *instUcs) {
        MMXU::instUc = (SAV *) instUcs;
    }

};


#endif //MTZ_MMXU_H
