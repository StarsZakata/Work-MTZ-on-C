//
// Created by Сергей on 02.10.2021.
//

#include "MV.h"

BaseType<float> &MV::getMag() {
    return mag;
}

void MV::setMag(const BaseType<float> &mag) {
    MV::mag = mag;
}
