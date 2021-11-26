//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_SEC_H
#define MTZ_SEC_H

#include <DATA.h>
#include <BaseType.h>

///< Подсчет нарушений безопасности
class SEC:public DATA {
    BaseType<int> cnt;

    class SEV {
        enum ENUMERATED {
            unknown,
            critical,
            major,
            minor,
            warning
        };
    };
    //BaseType<SEV> sev;

    //BaseType<TimeStamp> t; //Для отслеживания времени
    //BaseType<string> addr;
    //BaseType<string> addInfo;

    ///<Конфигурация, описание и расширение
    /*
   BaseType<std::string> d;
   BaseType<std::string> dU;
   BaseType<std::string> cdcNs;
   BaseType<std::string> cdcName;
   BaseType<std::string> dataNs;
   */

};


#endif //MTZ_SEC_H
