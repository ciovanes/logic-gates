#include <iostream>
#include "logic-gates.hpp"


// Logic gates
bool _not(bool i1) {
    int result;
    switch (i1) {
        case 0: result = 1; break;
        default: result = 0; break;
    }
    return result;
}


bool _and(bool i1, bool i2) {
    return i1 * i2;
}


bool _or(bool i1, bool i2) {
    int result = i1 + i2;
    switch (result) {
        case 2: result = 1; break;
        default: result; break;
    }
    return result;
}


bool _xor(bool i1, bool i2) {
    int result = i1 + i2;
    switch (result) {
        case 2: result = 0; break;
        default: result; break;
    }
    return result;
}


bool _nand(bool i1, bool i2) {
    int result;
    result = _not(_and(i1, i2));
    return result;
}


bool _nor(bool i1, bool i2) {
    int result;
    result = _not(_or(i1, i2));
    return result;
}


bool _xnor(bool i1, bool i2) {
    int result;
    result = _not(_xor(i1, i2));
    return result;
}

