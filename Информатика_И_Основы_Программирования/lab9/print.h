//
// Created by sinimawath on 30.10.17.
//

#ifndef LAB9_PRINT_H
#define LAB9_PRINT_H

enum Format_Print{
    FIXED, SCIENTIFIC
};

#include <iomanip>
#include <iostream>
using namespace std;
void print_matrix(long double **, int, int, int, Format_Print);

#endif //LAB9_PRINT_H
