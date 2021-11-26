//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_PULSECONFIGURATION_H
#define MTZ_PULSECONFIGURATION_H

#include <DATA.h>
#include <BaseType.h>

///<Конфигурация импульса
class PulseConfiguration: public DATA {
    /*!
    * Определяет, является ли управляющий выход импулсным выходом
     или это выход постоянно значения
     */
    class CMD {
    public:
        enum struct ENUMERATED {
            pulse, ///<импульсное
            persistent, ///<постоянное
        };
    };
    //BaseType<CMD> cmdQual;

    /*!
     * Определители длительность импульса:
     * NumPIs - специфицирует число генерируемых импульсов,
     * onDur— длительность импульса,
     * offDur— временной промежуток между двумя импульсами
     */
    BaseType <int> onDur;
    BaseType <int> offDur;
    BaseType <int> NumPIs;



};


#endif //MTZ_PULSECONFIGURATION_H
