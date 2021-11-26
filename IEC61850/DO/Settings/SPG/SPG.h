//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_SPG_H
#define MTZ_SPG_H

#include <DATA.h>
#include <BaseType.h>

///< Установка состояния Одноэлементная
class SPG: public DATA {
private:
    ///<Установка состояния
    BaseType<bool> setVal;
    ///<Конфигурация, описание и расширение
    /*
    BaseType<std::string> d;
    BaseType<std::string> dU;
    BaseType<std::string> cdcNs;
    BaseType<std::string> cdcName;
    BaseType<std::string> dataNs;
     */
public:
    const BaseType<bool> &getSetVal() const;

    void setSetVal(const BaseType<bool> &setVal);
};


#endif //MTZ_SPG_H
