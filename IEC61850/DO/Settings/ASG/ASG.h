//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_ASG_H
#define MTZ_ASG_H

#include <DATA.h>
#include <BaseType.h>


///<Задания значения аналоговго сигнала
class ASG:public DATA {
private:
    ///<Задание значений аналоговой переменной
    BaseType<float> setVal;
    ///<Конфигурация, описание и расширение
    /*
    BaseType<Unit> units;
    BaseType<ScaledValueConfig> sVC;
    BaseType<AnalogValue> minVal;
    BaseType<AnalogValue> maxVal;
    BaseType<AnalogValue> stepSize;
    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
    */

public:
    BaseType<float> &getSetVal();

    void setSetVal(const BaseType<float> &setVal);

};


#endif //MTZ_ASG_H
