//
// Created by Сергей on 02.10.2021.
//

#include "ASG.h"

BaseType<float> &ASG::getSetVal() {
    return setVal;
}

void ASG::setSetVal(const BaseType<float> &setVal) {
    ASG::setVal = setVal;
}


