//
// Created by Сергей on 02.10.2021.
//

#include "DPS.h"

const BaseType<std::byte> &DPS::getStVal() const {
    return stVal;
}

void DPS::setStVal(const BaseType<std::byte> &stVal) {
    DPS::stVal = stVal;
}
