//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_DEL_H
#define MTZ_DEL_H

#include <DATA.h>
#include <BaseType.h>
#include <CMV.h>
///< Треугольник
class DEL:public DATA {
    CMV phsAB;
    CMV phsBC;
    CMV phsCA;

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
    CMV &getPhsAb();

    void setPhsAb(const CMV &phsAb);

    CMV &getPhsBc();

    void setPhsBc(const CMV &phsBc);

    CMV &getPhsCa();

    void setPhsCa(const CMV &phsCa);
};


#endif //MTZ_DEL_H
