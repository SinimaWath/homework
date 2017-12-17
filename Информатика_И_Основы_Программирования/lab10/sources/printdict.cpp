

//TODO: record all dictionary in dictionary.output


#include "../headers/data.h"
#include <iostream>
#include <fstream>

using namespace std;
void print_words_list(word_pair *dictionary, int& countPairInDict) {
    for (int i = 0; i < countPairInDict; ++i) {
        cout << dictionary[i].eng << " - " << dictionary[i].rus << endl;
    }

    cout << endl;
}

void record_dict_in_file(word_pair *dictionary, int &countPairInDict) {
    ofstream out("dictionary.out",ios::out);

    if(!out.is_open()){
        cout << "Cannot open file dictionary.out" << endl;
        return;
    }

    for (int i = 0; i < countPairInDict; ++i) {
        out << dictionary[i].eng << " - "<< dictionary[i].rus << endl;
    }

}