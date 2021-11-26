//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_LN_H
#define MTZ_LN_H

#include "string"

class LN {
    std::string name;
    std::string reference;
public:
    virtual void process();

public:
    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getReference() const;

    void setReference(const std::string &reference);
};


#endif //MTZ_LN_H
