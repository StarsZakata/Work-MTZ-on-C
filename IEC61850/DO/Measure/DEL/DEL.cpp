//
// Created by Сергей on 04.10.2021.
//

#include "DEL.h"

CMV &DEL::getPhsAb() {
    return phsAB;
}

void DEL::setPhsAb(const CMV &phsAb) {
    phsAB = phsAb;
}

CMV &DEL::getPhsBc() {
    return phsBC;
}

void DEL::setPhsBc(const CMV &phsBc) {
    phsBC = phsBc;
}

CMV &DEL::getPhsCa() {
    return phsCA;
}

void DEL::setPhsCa(const CMV &phsCa) {
    phsCA = phsCa;
}
