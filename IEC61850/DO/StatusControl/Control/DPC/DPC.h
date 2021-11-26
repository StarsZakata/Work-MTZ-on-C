//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_DPC_H
#define MTZ_DPC_H

#include <DATA.h>
#include <cstddef>
#include <BaseType.h>

///< Дублированное управление и состояние
class DPC: public DATA {
    ///<Управление и состояние
    ///<Состояние выключателя
    /*
    enum struct ENUMERATED {
        intermediateState, //00(0)
        off,               //01(1)
        on,                //10(2)
        badState           //11(3)
    };
    */
    //todo должен быть byte
    BaseType<int> stVal;

    BaseType<bool> ctIVal;

    /*
    BaseType<TimeStamp> operTm;
    BaseType<Originator> origin;
    BaseType<int> ctINum;
    BaseType<Quality> q;
    BaseType<TimeStamp> t;
    BaseTypes<bool> stSeld;
     */
    ///<Замещение
    /*
    class SUBVAL{
        enum struct ENUMERATED_subVal {
            intermediateState,
            off,
            on,
            badState
        };
    };
    SUBVAL subVal;
    BaseType<Quality> subQ;
    BaseType<string> subID;
    BaseType<bool> subEna;
    */
    ///<Конфигурация, описание и расширение
    /*
    BaseType<PulseConfiguration> pulseConfig;
    BaseType<CtlModels> ctIModel;
    BaseType<int> sboTimeout;
    BaseType<SboClasses> sboClass;

    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
     */


public:
    BaseType<int> &getStVal();

    void setStVal(const BaseType<int> &stVal);

    BaseType<bool> &getCtIVal();

    void setCtIVal(const BaseType<bool> &ctIVal);

};


#endif //MTZ_DPC_H
