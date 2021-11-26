//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_MSQI_H
#define MTZ_MSQI_H

#include <LN.h>
#include <SEQ.h>
#include <WYE.h>
#include <Vector.h>
#include <vector>
using namespace std;
/** Последовательность и небаланс */
class MSQI: public LN {

private:
    /** Состояние работоспособности внешнего оборудования (внешние сенсорные устройства) */
     //INS EEHealth;
    /** Паспортная табличка внешнего оборудования */
     //DPL EEName;
    /** Последовательность по прямой, поперечной и нулевой осям */
     //SEQ DQ0Seq;
    /** Ток небаланса */
     //WYE ImbA;
    /** Ток небаланса обратной последовательности */
     //MV ImbNgA;
    /** Напряжение небаланса обратной последовательности */
     //MV ImbNgV;
    /** Междуфазное напряжение небаланса */
     //MV ImbPPV;
    /** Напряжение небаланса */
     //WYE ImbV;
    /** Ток небаланса нулевой последовательности */
     //MV ImbZroA;
    /** Напряжение небаланса нулевой последовательности */
     //MV ImbZroV;
    /** Максимальный ток небаланса */
     //MV MaxImbA;
    /** Междуфазное напряжение небаланса */
     //MV MaxImbPPV;
    /** Максимальное напряжение небаланса */
     //MV MaxImbV;

    /** Ток прямой, обратной и нулевой последовательностей */
    SEQ SeqA;
    /** Напряжение прямой, обратной и нулевой последовательностей */
    SEQ SeqV;

    ///входные параметры
    /** Фазные токи */
    WYE *A;
    /** Фазное напряжение */
    //WYE *PhV;
    //WYE *W;
    /** Поворот векторов В и С для расчета последовательностей */
    Vector rotationPhaseB;
    Vector rotationPhaseC;

public:
    void process(){

        sequenceCalculation(*A, &SeqA);
        //sequenceCalculation(*PhV, SeqV);
        //sequenceCalculation(W, SeqV);
    }

    vector<int> GrafC1;
    vector<int> GrafC2;
    vector<int> GrafC3;


    void sequenceCalculation(WYE signal, SEQ *sequence) {

        float phaseAx = signal.getPhsA().getCVal().getOrtX().getvalue();
        float phaseAy = signal.getPhsA().getCVal().getOrtY().getvalue();

        float phaseBx = signal.getPhsB().getCVal().getOrtX().getvalue();
        float phaseBy = signal.getPhsB().getCVal().getOrtY().getvalue();
        float phaseB = signal.getPhsB().getCVal().getMag().getvalue();
        float phaseBAng = signal.getPhsB().getCVal().getAng().getvalue();

        float phaseCx = signal.getPhsC().getCVal().getOrtX().getvalue();
        float phaseCy = signal.getPhsC().getCVal().getOrtY().getvalue();
        float phaseC = signal.getPhsC().getCVal().getMag().getvalue();
        float phaseCAng = signal.getPhsC().getCVal().getAng().getvalue();

        /** Поворот вектора В, C на 120 в прямом направлении */
        rotationPhaseB.setValueD(phaseB,phaseBAng + 120);
        rotationPhaseC.setValueD(phaseC,phaseCAng - 120);

        /** Расчет прямой последовательности */
        sequence->getS1().getCVal().setValue0(
                (phaseAx + rotationPhaseB.getOrtX().getvalue() + rotationPhaseC.getOrtX().getvalue()) / 3,
                (phaseAy + rotationPhaseB.getOrtY().getvalue() + rotationPhaseC.getOrtY().getvalue()) / 3);

        /** Поворот вектора В, C на 120 в обратном направлении */
        rotationPhaseB.setValueD(phaseB,phaseBAng - 120);
        rotationPhaseC.setValueD(phaseC,phaseCAng + 120);

        /** Расчет обратной последовательности */
        sequence->getS2().getCVal().setValue0(
                (phaseAx + rotationPhaseB.getOrtX().getvalue() + rotationPhaseC.getOrtX().getvalue()) / 3,
                (phaseAy + rotationPhaseB.getOrtY().getvalue() + rotationPhaseC.getOrtY().getvalue()) / 3);

        /** Расчет нулевой последовательности */
        sequence->getS3().getCVal().setValue0(
                (phaseAx + phaseBx + phaseCx) / 3,
                (phaseAy + phaseBy + phaseCy) / 3);

        cout<<sequence->getS3().getCVal().getMag().getvalue()<<endl;

        GrafC3.push_back(sequence->getS3().getCVal().getMag().getvalue());
    }



    SEQ &getSeqA() {
        return SeqA;
    }

    void setSeqA(const SEQ &seqA) {
        SeqA = seqA;
    }

    const SEQ &getSeqV() const {
        return SeqV;
    }

    void setSeqV(const SEQ &seqV) {
        SeqV = seqV;
    }

    void setA(WYE *a) {
        MSQI::A = (WYE *)a;
    }


    const Vector &getRotationPhaseB() const {
        return rotationPhaseB;
    }

    void setRotationPhaseB(const Vector &rotationPhaseB) {
        MSQI::rotationPhaseB = rotationPhaseB;
    }

    const Vector &getRotationPhaseC() const {
        return rotationPhaseC;
    }

    void setRotationPhaseC(const Vector &rotationPhaseC) {
        MSQI::rotationPhaseC = rotationPhaseC;
    }
};


#endif //MTZ_MSQI_H
