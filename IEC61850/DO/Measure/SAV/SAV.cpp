//
// Created by Сергей on 02.10.2021.
//

#include "SAV.h"

BaseType<float> &SAV::getInstmag() {
    return instmag;
}

void SAV::setInstmag(const BaseType<float> &instmag) {
    SAV::instmag = instmag;
}
