#include <iostream>
#include "logic-gates.cpp"

void drawresults() {
    printf("NOT \n");
    printf("+-i-+-o-+\n");
    printf("| 0 | %i |\n", _not(0));
    printf("+---+---+\n");
    printf("| 1 | %i |\n", _not(1));
    printf("+---+---+\n");
    printf("\n");

    printf("AND \n");
    printf("+-i1-+-i2-+-o-+\n");
    printf("| 0  | 0  | %i |\n", _and(0, 0));
    printf("+----+----+---+\n");
    printf("| 0  | 1  | %i |\n", _and(0, 1));
    printf("+----+----+---+\n");
    printf("| 1  | 0  | %i |\n", _and(1, 0));
    printf("+----+----+---+\n");
    printf("| 1  | 1  | %i |\n", _and(1, 1));
    printf("+----+----+---+\n");
    printf("\n");

    printf("OR \n");
    printf("+-i1-+-i2-+-o-+\n");
    printf("| 0  | 0  | %i |\n", _or(0, 0));
    printf("+----+----+---+\n");
    printf("| 0  | 1  | %i |\n", _or(0, 1));
    printf("+----+----+---+\n");
    printf("| 1  | 0  | %i |\n", _or(1, 0));
    printf("+----+----+---+\n");
    printf("| 1  | 1  | %i |\n", _or(1, 1));
    printf("+----+----+---+\n");
    printf("\n");

    printf("XOR \n");
    printf("+-i1-+-i2-+-o-+\n");
    printf("| 0  | 0  | %i |\n", _xor(0, 0));
    printf("+----+----+---+\n");
    printf("| 0  | 1  | %i |\n", _xor(0, 1));
    printf("+----+----+---+\n");
    printf("| 1  | 0  | %i |\n", _xor(1, 0));
    printf("+----+----+---+\n");
    printf("| 1  | 1  | %i |\n", _xor(1, 1));
    printf("+----+----+---+\n");
    printf("\n");

    printf("NAND \n");
    printf("+-i1-+-i2-+-o-+\n");
    printf("| 0  | 0  | %i |\n", _nand(0, 0));
    printf("+----+----+---+\n");
    printf("| 0  | 1  | %i |\n", _nand(0, 1));
    printf("+----+----+---+\n");
    printf("| 1  | 0  | %i |\n", _nand(1, 0));
    printf("+----+----+---+\n");
    printf("| 1  | 1  | %i |\n", _nand(1, 1));
    printf("+----+----+---+\n");
    printf("\n");

    printf("NOR \n");
    printf("+-i1-+-i2-+-o-+\n");
    printf("| 0  | 0  | %i |\n", _nor(0, 0));
    printf("+----+----+---+\n");
    printf("| 0  | 1  | %i |\n", _nor(0, 1));
    printf("+----+----+---+\n");
    printf("| 1  | 0  | %i |\n", _nor(1, 0));
    printf("+----+----+---+\n");
    printf("| 1  | 1  | %i |\n", _nor(1, 1));
    printf("+----+----+---+\n");
    printf("\n");

    printf("XNOR \n");
    printf("+-i1-+-i2-+-o-+\n");
    printf("| 0  | 0  | %i |\n", _xnor(0, 0));
    printf("+----+----+---+\n");
    printf("| 0  | 1  | %i |\n", _xnor(0, 1));
    printf("+----+----+---+\n");
    printf("| 1  | 0  | %i |\n", _xnor(1, 0));
    printf("+----+----+---+\n");
    printf("| 1  | 1  | %i |\n", _xnor(1, 1));
    printf("+----+----+---+\n");
    printf("\n");
}


int main() {
    drawresults();
    return 0;
}