//
// Created by Сергей on 02.10.2021.
//

#include "ACT.h"

BaseType<bool> &ACT::getGeneral() {
    return general;
}

void ACT::setGeneral(const BaseType<bool> &general) {
    ACT::general = general;
}

BaseType<bool> &ACT::getPhsA() {
    return PhsA;
}

void ACT::setPhsA(const BaseType<bool> &phsA) {
    PhsA = phsA;
}

BaseType<bool> &ACT::getPhsB() {
    return PhsB;
}

void ACT::setPhsB(const BaseType<bool> &phsB) {
    PhsB = phsB;
}

BaseType<bool> &ACT::getPhsC() {
    return PhsC;
}

void ACT::setPhsC(const BaseType<bool> &phsC) {
    PhsC = phsC;
}

const BaseType<bool> &ACT::getNeut() const {
    return Neut;
}

void ACT::setNeut(const BaseType<bool> &neut) {
    Neut = neut;
}
