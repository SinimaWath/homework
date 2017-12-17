#include <iostream>
#include "headers/printdict.h"
#include "headers/dictionary.h"
#include "headers/util.h"

using namespace std;

int main() {

    word_pair dictionary[MAX_LENGTH];
    char eng[WORD_L];
    int countPairInDict = 0;
    char rus[WORD_L];
    Compare compare1 = compare;

    //TODO: initialize first 10 pair in dictionary
    initializeStartDictionary(dictionary, compare1, countPairInDict);

    while(true){
        switch(menu()){
            case 1:
                word_pair pair;
                cout << "enter the english word: ";
                cin >> eng;
                cout << "enter the russian word: ";
                cin >> rus;
                eng[0] = static_cast<char>(toupper(eng[0]));
                rus[0] = static_cast<char>(toupper(rus[0]));
                //Copy eng to pair.eng, and rus to pair.rus
                strcopy(pair.eng,eng);
                strcopy(pair.rus,rus);

                add_word_pair(pair,dictionary,compare1,countPairInDict);
                break;
            case 2:
                cout <<"enter the word which you want remove: ";
                cin >> eng;

                eng[0] = static_cast<char>(toupper(eng[0]));

                remove_word_pair(eng, dictionary, compare1, countPairInDict);
                break;
            case 3:
                cout <<"enter the english word which you want translate: ";
                cin >> eng;

                eng[0] = static_cast<char>(toupper(eng[0]));

                translate_english(eng, dictionary, compare1, countPairInDict);

                break;
            case 4:
                cout <<"enter the russian word which you want translate: ";
                cin >> rus;

                rus[0] = static_cast<char>(toupper(rus[0]));

                translate_russian(rus,dictionary,compare1,countPairInDict);

                break;
            case 5:
                print_words_list(dictionary, countPairInDict);

                break;
            case 6:
                cout << "Check file dictionary.out" << endl;
                record_dict_in_file(dictionary, countPairInDict);

                break;

            case 7:
                return 0;
        }
    }

}

