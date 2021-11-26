//
// Created by Сергей on 02.10.2021.
//

#include "ING.h"

BaseType<int> &ING::getSetVal() {
    return setVal;
}

void ING::setSetVal(const BaseType<int> &setVal) {
    ING::setVal = setVal;
}


