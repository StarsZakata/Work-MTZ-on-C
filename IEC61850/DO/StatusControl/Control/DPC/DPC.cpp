//
// Created by Сергей on 02.10.2021.
//

#include "DPC.h"


BaseType<bool> &DPC::getCtIVal() {
    return ctIVal;
}

void DPC::setCtIVal(const BaseType<bool> &ctIVal) {
    DPC::ctIVal = ctIVal;
}

BaseType<int> &DPC::getStVal() {
    return stVal;
}

void DPC::setStVal(const BaseType<int> &stVal) {
    DPC::stVal = stVal;
}
