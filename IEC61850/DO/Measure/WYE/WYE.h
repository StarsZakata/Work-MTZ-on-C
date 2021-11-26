//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_WYE_H
#define MTZ_WYE_H

#include <DATA.h>
#include <CMV.h>

///< Звезда
class WYE:public DATA {
private:
    CMV phsA;
    CMV phsB;
    CMV phsC;
    CMV neut;

    CMV net;
    CMV res;

    ///<Конфигурация, описание и расширение
    /*
    class ANGREF{
        enum struct ENUMERATED {
            Va,
            Vb,
            Vc,
            Aa,
            Ab,
            Ac,
            Vab,
            Vbc,
            Vca,
            Vother,
            Aothet
        };
    };
    //ANGREF angRef;
    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
     */
public:
    CMV &getPhsA();

    void setPhsA(const CMV &phsA);

    CMV &getPhsB();

    void setPhsB(const CMV &phsB);

    CMV &getPhsC();

    void setPhsC(const CMV &phsC);

    const CMV &getNet() const;

    void setNet(const CMV &net);

};


#endif //MTZ_WYE_H
