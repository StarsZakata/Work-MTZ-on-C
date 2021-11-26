//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_SEQ_H
#define MTZ_SEQ_H

#include <DATA.h>
#include <CMV.h>
#include <BaseType.h>
class SEQ: public DATA {
private:
    CMV s1;
    CMV s2;
    CMV s3;

    ///<измеряемые атрибуты
    class SEQT{
        enum struct ENUMERATED {
            posNegZero,///<полож.-отриц.-нуль
            dirQuadZero///<напр.-квадр.-нуль
        };
    };
    //SEQT seqT;
    ///<Конфигурация, описание и расширение
    /*
    class PHSREF{
        enum struct ENUMERATED_phsRef {
            A,
            B,
            C,
            };
        };
    PHSREF phsRef;
    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
    */
public:
    CMV &getS1();

    void setS1(const CMV &s1);

    CMV &getS2();

    void setS2(const CMV &s2);

    CMV &getS3();

    void setS3(const CMV &s3);
};


#endif //MTZ_SEQ_H
