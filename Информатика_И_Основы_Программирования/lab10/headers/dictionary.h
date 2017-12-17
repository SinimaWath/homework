//
// Created by sinimawath on 29.10.17.
//

#ifndef LAB10_DICTIONARY_H
#define LAB10_DICTIONARY_H

#include "data.h"

void initializeStartDictionary(word_pair*, Compare, int&);
word_pair add_word_pair(word_pair, word_pair *, Compare, int&);
void remove_word_pair(char*, word_pair*, Compare, int&);
void translate_english(char *, word_pair *, Compare, int);
void translate_russian(char *, word_pair *, Compare, int);

#endif //LAB10_DICTIONARY_H
