//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_INC_H
#define MTZ_INC_H

#include <DATA.h>
#include <BaseType.h>

///< Целоичесленное управление и состояние
class INC: public DATA {
    ///<Управление и состояние
    /*
   BaseType<int> ctIVal;
   BaseType<TimeStamp> operTm;
   BaseType<Originator> origin;
   BaseType<int> ctINum;
   BaseType<int> stVal;
   BaseType<Quality> q;
   BaseType<TimeStamp> t;
   BaseTypes<bool> stSeld;
   */

    ///<Замещение
    /*
    BaseType<bool> subEna;
    BaseType<int> subVal;
    BaseType<Quality> subQ)
    BaseType<string> subID;
    */
    ///<Конфигурация, описание и расширение
    /*
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


#endif //MTZ_INC_H
