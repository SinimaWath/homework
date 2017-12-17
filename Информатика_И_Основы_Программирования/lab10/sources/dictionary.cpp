#include <iostream>
#include "../headers/data.h"
#include "../headers/search.h"
#include "../headers/util.h"


using namespace std;
//TODO:
void remove_word_pair(char *eng, word_pair *dictionary, Compare cmp, int& countPairInDict) {
    int element = binarySearch(eng,dictionary,cmp,countPairInDict);

    if(cmp(dictionary[element].eng,eng) != 0){
        cout << eng << " was not found in dictionary. ERROR!!" << endl;
        return;
    }

    shiftArrayBack(dictionary, countPairInDict, element);

    countPairInDict--;

}
//TODO:
void translate_english(char *eng, word_pair *dictionary, Compare cmp, int countPairInDict) {
    int element = binarySearch(eng,dictionary,cmp,countPairInDict);

    if(cmp(dictionary[element].eng,eng) != 0){
        cout << eng << " was not found in dictionary. ERROR!!" << endl;
        return;
    }

    cout << dictionary[element].rus << endl << endl;

}

//TODO:
void translate_russian(char *rus, word_pair *dictionary, Compare cmp, int countPairInDict) {
    int element = linearSearch(rus,dictionary,cmp,countPairInDict);

    if(cmp(dictionary[element].rus,rus) != 0){
        cout << rus << " was not found in dictionary. ERROR!!" << endl;
        return;
    }

    cout << dictionary[element].eng << endl << endl;
}

word_pair add_word_pair(word_pair pair, word_pair *dictionary, Compare cmp, int& countPairInDict){
    countPairInDict++;
    if(countPairInDict == 100){
        cout << "ERROR!! Dictionary is full... ";
        return pair;
    }
    int element = binarySearch(pair,dictionary,cmp,countPairInDict);
    //TODO: shift in array
    shiftArray(dictionary,countPairInDict, element);

    dictionary[element] = pair;


    return pair;

}

void initializeStartDictionary(word_pair* dictionary, Compare comp, int& countPairInDict) {
    char english[9][WORD_L] = {"Dog","Cat","House","Hangover","God","Policewomen","Policedog","Here","Den"};
    char russian[9][WORD_L] = {"Pes","Kot","Hata","Othodnyak","Not found","Jenshina oficter","Sobaka policioner","Zdes","Priton"};

    for(int i = 0; i < 9; i++){
        // TODO: Можно ли заполнять структуру без начальной инициализации
        word_pair pair = {"",""};
        strcopy(pair.eng,english[i]);
        strcopy(pair.rus,russian[i]);

        add_word_pair(pair,dictionary,comp,countPairInDict);
    }
}

