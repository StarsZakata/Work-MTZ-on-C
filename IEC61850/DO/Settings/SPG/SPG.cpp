//
// Created by Сергей on 02.10.2021.
//

#include "SPG.h"

const BaseType<bool> &SPG::getSetVal() const {
    return setVal;
}

void SPG::setSetVal(const BaseType<bool> &setVal) {
    SPG::setVal = setVal;
}
