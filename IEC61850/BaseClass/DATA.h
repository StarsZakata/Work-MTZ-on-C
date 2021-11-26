//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_DATA_H
#define MTZ_DATA_H

#include "string"

class DATA {
private:
    std::string name;
    std::string reference;
public:

    DATA(){

    }

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getReference() const;

    void setReference(const std::string &reference);
};


#endif //MTZ_DATA_H
