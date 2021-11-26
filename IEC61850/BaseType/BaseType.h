//
// Created by Сергей on 02.10.2021.
//

#ifndef MTZ_BASETYPE_H
#define MTZ_BASETYPE_H

#include <DATA.h>
#include <cstddef>

template<typename T>
class BaseType:public DATA {
    private:
    T value;
    public:
        BaseType(T value) : value(value) {

        }
        T getvalue() {
            return value;
        }

        void setvalue(T scope) {
            this->value = scope;
        }

        BaseType() {

        }
};



#endif //MTZ_BASETYPE_H
