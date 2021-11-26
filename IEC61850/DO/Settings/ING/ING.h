//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_ING_H
#define MTZ_ING_H

#include <DATA.h>
#include <BaseType.h>

///< Установка состояния целочисленная
class ING: public DATA {
private:
    ///<Установка состояния
    BaseType<int> setVal;
    ///<Конфигурация, описание и расширение
    /*
    BaseType<int> minVal;
    BaseType<int> maxVal;
    BaseType<int> stepSize;
    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
     */
public:
    BaseType<int> &getSetVal();

    void setSetVal(const BaseType<int> &setVal);

};


#endif //MTZ_ING_H
