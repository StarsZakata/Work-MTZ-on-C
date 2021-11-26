//
// Created by Сергей on 02.10.2021.
//

#include "LN.h"

const std::string &LN::getName() const {
    return name;
}

void LN::setName(const std::string &name) {
    LN::name = name;
}

const std::string &LN::getReference() const {
    return reference;
}

void LN::setReference(const std::string &reference) {
    LN::reference = reference;
}

void LN::process() {

}
