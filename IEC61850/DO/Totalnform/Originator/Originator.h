//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_ORIGINATOR_H
#define MTZ_ORIGINATOR_H

#include <DATA.h>
#include <BaseType.h>

///< Инициатор
class Originator:public DATA {

    class ORCAT{
        enum struct ENUMERATED{
            notSupported,///<не поддерживается
            bayControl,///<управление на уровне присоединения
            stationControl,///<управление на уровне станции
            remoteControl,///<удаленное управление
            automaticBay,///<автоматическое управление на уровне присоединения
            automaticStation,///<автоматическое управление на уровне станции
            automaticRemote,///<автоматическеское удаленное управдение
            maintenance,///<техническое обслуживание
            process///<процесс
        };
    };

    //BaseType<ORCAT> orCat;

    /*!
     * Идентификация инициатора должна содержать адрес отправителя, по чей инициативе
     * произошло изменение значения
     */
    //BaseType<std::string> orldent;

};


#endif //MTZ_ORIGINATOR_H
