//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_BSC_H
#define MTZ_BSC_H

#include <DATA.h>
#include <BaseType.h>

///< Двоичное управление пошаговым механизмом и его состояние
class BSC: public DATA {
public:
    ///<Управление и состояние
    /*
    class CTIVAL{
        enum struct ENUMERATED {
        stop,
        lower,
        higher,
        reserved
    };
    };
    CTIVAL ctIVal;
    BaseType<TimeStamp> operTm;
    BaseType<Originator> origin;
    BaseType<int> ctINum;
    BaseType<ValWithTranc> valWTr;
    BaseType<Quality> q;
    BaseType<TimeStamp> t;
    BaseTypes<bool> stSeld;
    */
    ///<Замещение
    /*
    BaseType<bool> subEna;
    BaseType<ValWithTranc> subVal;
    BaseType<Quality> subQ)
    BaseType<string> subID;
     */
    ///<Конфигурация, описание и расширение
    /*
    BaseType<bool> persistent;
    BaseType<CtlModels> ctIModel;
    BaseType<int> sboTimeout;
    BaseType<SboClasses> sboClass;

    BaseType<int> minVal;
    BaseType<int> maxVal;
    BaseType<int> stepSize;

    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
     */

};


#endif //MTZ_BSC_H
