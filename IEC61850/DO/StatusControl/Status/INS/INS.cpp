//
// Created by Сергей on 02.10.2021.
//

#include "INS.h"

const BaseType<int> &INS::getStVal() const {
    return stVal;
}

void INS::setStVal(const BaseType<int> &stVal) {
    INS::stVal = stVal;
}
