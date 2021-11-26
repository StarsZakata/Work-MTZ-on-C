//
// Created by Сергей on 02.10.2021.
//

#include "DATA.h"

const std::string &DATA::getName() const {
    return name;
}

void DATA::setName(const std::string &name) {
    DATA::name = name;
}

const std::string &DATA::getReference() const {
    return reference;
}

void DATA::setReference(const std::string &reference) {
    DATA::reference = reference;
}
