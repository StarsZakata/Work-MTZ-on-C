//
// Created by Сергей on 02.10.2021.
//

#include "SPS.h"

const BaseType<bool> &SPS::getStVal() const {
    return stVal;
}

void SPS::setStVal(const BaseType<bool> &stVal) {
    SPS::stVal = stVal;
}
