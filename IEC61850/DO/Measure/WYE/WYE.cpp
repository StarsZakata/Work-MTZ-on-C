//
// Created by Сергей on 02.10.2021.
//

#include "WYE.h"

CMV &WYE::getPhsA() {
    return phsA;
}

void WYE::setPhsA(const CMV &phsA) {
    WYE::phsA = phsA;
}

CMV &WYE::getPhsB() {
    return phsB;
}

void WYE::setPhsB(const CMV &phsB) {
    WYE::phsB = phsB;
}

CMV &WYE::getPhsC() {
    return phsC;
}

void WYE::setPhsC(const CMV &phsC) {
    WYE::phsC = phsC;
}

const CMV &WYE::getNet() const {
    return net;
}

void WYE::setNet(const CMV &net) {
    WYE::net = net;
}
