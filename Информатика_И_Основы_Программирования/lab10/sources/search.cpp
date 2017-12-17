#include "../headers/data.h"

int binarySearch(word_pair pair, word_pair *dictionary, Compare cmp, int countPairInDict){
    int first = 0, last = countPairInDict - 1;

    while(first < last){
        int mid = first + ( last - first) / 2;

        if(cmp(pair.eng,dictionary[mid].eng) <= 0)
            last = mid;
        else
            first = mid + 1;
    }

    return last;
}
int binarySearch(char *eng, word_pair *dictionary,Compare cmp, int countPairInDict){
    int first = 0, last = countPairInDict - 1;

    while(first < last){
        int mid = first + ( last - first) / 2;

        if(cmp(eng,dictionary[mid].eng) <= 0)
            last = mid;
        else
            first = mid + 1;
    }

    return last;
}

int linearSearch(char *rus, word_pair *dict, Compare cmp, int countPairInDict) {
    for(int i = 0; i < countPairInDict;i++){
        if(cmp(dict[i].rus,rus) == 0)
            return i;
    }

    return 0;
}

void shiftArray(word_pair *dict, int countPairInDict, int point) {

    for (int i = countPairInDict - 1; i > point; i--) {
        dict[i] = dict[i-1];
        //cout << dict[i].rus << dict[i].eng;
    }

}

void shiftArrayBack(word_pair *dict, int countPairInDict, int point){

    for(int i = point; i < countPairInDict-1; i++)
        dict[i] = dict[i+1];
}

