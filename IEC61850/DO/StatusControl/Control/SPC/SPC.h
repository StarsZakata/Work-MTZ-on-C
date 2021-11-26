//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_SPC_H
#define MTZ_SPC_H

#include <DATA.h>
#include <BaseType.h>

///< Недублированное управление состоянием
class SPC: public DATA {

private:
    ///<Управление и состояние
    /*
    BaseType<bool> ctIVal;

    BaseType<TimeStamp> operTm;
    BaseType<Originator> origin;
    BaseType<int> ctINum;
    BaseType<bool> stVal;
    BaseType<Quality> q;
    BaseType<TimeStamp> t;
    BaseTypes<bool> stSeld;
    */
    ///<Замещение
    /*
    BaseType<bool> subEna;
    BaseType<bool> subVal;
    BaseType<Quality> subQ;
    BaseType<string> subID;
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

};


#endif //MTZ_SPC_H
