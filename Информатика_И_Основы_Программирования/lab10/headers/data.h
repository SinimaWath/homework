//
// Created by sinimawath on 29.10.17.
//

#ifndef LAB10_DATA_H
#define LAB10_DATA_H
typedef int (*Compare)(const char*, const char*);
const int MAX_LENGTH = 100;
const int WORD_L = 31;

struct word_pair{
    char eng[WORD_L];
    char rus[WORD_L];
};
#endif //LAB10_DATA_H
