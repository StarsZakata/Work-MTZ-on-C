//
// Created by Сергей on 02.10.2021.
//

#include "ACD.h"


BaseType<bool> &ACD::getDirGeneral() {
    return dirGeneral;
}

void ACD::setDirGeneral(const BaseType<bool> &dirGeneral) {
    ACD::dirGeneral = dirGeneral;
}

BaseType<bool> &ACD::getGeneral() {
    return general;
}

void ACD::setGeneral(const BaseType<bool> &general) {
    ACD::general = general;
}

BaseType<bool> &ACD::getPhsA() {
    return PhsA;
}

void ACD::setPhsA(const BaseType<bool> &phsA) {
    PhsA = phsA;
}

BaseType<bool> &ACD::getPhsB() {
    return PhsB;
}

void ACD::setPhsB(const BaseType<bool> &phsB) {
    PhsB = phsB;
}

BaseType<bool> &ACD::getPhsC() {
    return PhsC;
}

void ACD::setPhsC(const BaseType<bool> &phsC) {
    PhsC = phsC;
}

BaseType<bool> &ACD::getNeut() {
    return Neut;
}

void ACD::setNeut(const BaseType<bool> &neut) {
    Neut = neut;
}
