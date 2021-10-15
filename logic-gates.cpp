#include <iostream>

using namespace std;

// Logic gates
int _not(int i1) {
    int result;
    switch (i1) {
        case 0: result = 1; break;
        default: result = 0; break;
    }
    return result;
}


int _and(int i1, int i2) {
    return i1 * i2;
}


int _or(int i1, int i2) {
    int result = i1 + i2;
    switch (result) {
        case 2: result = 1; break;
        default: result; break;
    }
    return result;
}


int _xor(int i1, int i2) {
    int result = i1 + i2;
    switch (result) {
        case 2: result = 0; break;
        default: result; break;
    }
    return result;
}


int _nand(int i1, int i2) {
    int result;
    result = _not(_and(i1, i2));
    return result;
}


int _nor(int i1, int i2) {
    int result;
    result = _not(_or(i1, i2));
    return result;
}


int _xnor(int i1, int i2) {
    int result;
    result = _not(_xor(i1, i2));
    return result;
}
 
// Func to draw all logic gates results
void drawresults() {
    cout << "NOT" << endl;
    cout << "i1 : 0" << " = " << _not(0) << endl;
    cout << "i1 : 1" << " = " << _not(1) << endl;
    cout << endl;

    cout << "AND" << endl;
    cout << "i1 : 0, i2 : 0" << " = " << _and(0, 0) << endl;
    cout << "i1 : 0, i2 : 1" << " = " <<_and(0, 1) << endl;
    cout << "i1 : 1, i2 : 0" << " = " << _and(1, 0) << endl;
    cout << "i1 : 1, i2 : 1" << " = " << _and(1, 1) << endl;
    cout << endl;

    cout << "OR" << endl;
    cout << "i1 : 0, i2 : 0" << " = " << _or(0, 0) << endl;
    cout << "i1 : 0, i2 : 1" << " = " << _or(0, 1) << endl;
    cout << "i1 : 1, i2 : 0" << " = " << _or(1, 0) << endl;
    cout << "i1 : 1, i2 : 1" << " = " << _or(1, 1) << endl;
    cout << endl;

    cout << "XOR" << endl;
    cout << "i1 : 0, i2 : 0" << " = " << _xor(0, 0) << endl;
    cout << "i1 : 0, i2 : 1" << " = " << _xor(0, 1) << endl;
    cout << "i1 : 1, i2 : 0" << " = " << _xor(1, 0) << endl;
    cout << "i1 : 1, i2 : 1" << " = " << _xor(1, 1) << endl;
    cout << endl;

    cout << "NAND" << endl;
    cout << "i1 : 0, i2 : 0" << " = " << _nand(0, 0) << endl;
    cout << "i1 : 0, i2 : 1" << " = " << _nand(0, 1) << endl;
    cout << "i1 : 1, i2 : 0" << " = " << _nand(1, 0) << endl;
    cout << "i1 : 1, i2 : 1" << " = " << _nand(1, 1) << endl;
    cout << endl;

    cout << "NOR" << endl;
    cout << "i1 : 0, i2 : 0" << " = " << _nor(0, 0) << endl;
    cout << "i1 : 0, i2 : 1" << " = " << _nor(0, 1) << endl;
    cout << "i1 : 1, i2 : 0" << " = " << _nor(1, 0) << endl;
    cout << "i1 : 1, i2 : 1" << " = " << _nor(1, 1) << endl;
    cout << endl;

    cout << "XNOR" << endl;
    cout << "i1 : 0, i2 : 0" << " = " << _xnor(0, 0) << endl;
    cout << "i1 : 0, i2 : 1" << " = " << _xnor(0, 1) << endl;
    cout << "i1 : 1, i2 : 0" << " = " << _xnor(1, 0) << endl;
    cout << "i1 : 1, i2 : 1" << " = " << _xnor(1, 1) << endl;
    cout << endl;
}

int main() {
    drawresults();
    return 0;
}