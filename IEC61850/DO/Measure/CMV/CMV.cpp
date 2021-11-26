//
// Created by Сергей on 02.10.2021.
//

#include "CMV.h"

Vector &CMV::getCVal() {
    return cVal;
}

void CMV::setCVal(const Vector &cVal) {
    CMV::cVal = cVal;
}
