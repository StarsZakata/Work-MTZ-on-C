//
// Created by Сергей on 03.10.2021.
//

#ifndef MTZ_RDIR_H
#define MTZ_RDIR_H

#include  <LN.h>

#include <WYE.h>
#include <ACD.h>

/** Элемент направленной защиты */
class RDIR:public LN {

/** Характирестический угол */
//ASG ChrAng;
/** Минимальный угол сдвига фаз в прямом направлении */
//ASG MinFwdAng;
/** Минимальный угол сдвига фаз в обратном направлении */
//ASG MinRvAng;
/** Максимальный угол сдвига фаз в прямом направлении */
//ASG MaxFwdAng;
/** Максимальный угол сдвига фаз в обратном направлении */
//ASG MaxRvAng;
/** Минимальный рабочий ток */
//ASG BlkValA;
/** Минимальное рабочее напряжение */
//ASG BlkValV;
/** Поляризационное квантование */
//ING PolQty;
/** Минимальное междуфазное напряжение */
//ASG MinPPV;

    /** Направление */
    ACD Dir;
    /** Активная мощность фазы */
    WYE *W;

    void process(){
            /** Если активная мощность больше 0, то направленность определяется как вперед */
            if(W->getPhsA().getCVal().getMag().getvalue()>0){
                Dir.getPhsA().setvalue(1);
            }
            if(W->getPhsB().getCVal().getMag().getvalue()>0){
                Dir.getPhsB().setvalue(1);
            }
            if(W->getPhsC().getCVal().getMag().getvalue()>0){
                Dir.getPhsC().setvalue(1);
            }
    }

public:
    const ACD &getDir() const {
        return Dir;
    }

    void setDir(const ACD &dir) {
        Dir = dir;
    }

    WYE *getW() const {
        return W;
    }

    void setW(WYE *w) {
        RDIR::W = (WYE*) w;
    }

};


#endif //MTZ_RDIR_H
