//
// Created by sinimawath on 29.10.17.
//

#ifndef LAB10_SEARCH_H
#define LAB10_SEARCH_H


#include "data.h"

int linearSearch(char*, word_pair *, Compare, int);
int binarySearch(word_pair, word_pair *, Compare, int);
int binarySearch(char*, word_pair *, Compare, int);


void shiftArrayBack(word_pair*, int, int);
void shiftArray(word_pair*, int, int);


#endif //LAB10_SEARCH_H
