#include <iostream>
#include "ncurses.h"
using namespace std;

typedef long long ll;

int compare(const char *, const char *);
void readText();
ll getArrayOfWord();
void printWords(ll);

const ll STRING_SIZE = 2147483648;
char word[STRING_SIZE/10000][1000];
char buf[STRING_SIZE];

int compare(const char *str1, const char *str2){


    while(*str1 == *str2) {
        if (*str1 == '\0')
            return 0;
        str1++,str2++;
    }

    return  *str1 < *str2? -1 : 1;

}

void readText(){
    int curChar;
    ll i = 0;
    while((curChar = getch()) != '.'){
        if(curChar >= 'a' && curChar <= 'z' || curChar == ' '){
            buf[i++] = static_cast<char>(curChar);
            addch(curChar);
        } else if (curChar == KEY_BACKSPACE){
            addch('\b');
            delch();
            buf[ i != 0? --i: 0] = '\0';
        }

        refresh();
    }

    buf[i] = '\0';
}

void printWords(ll wordSize){
    addch('\n');
    for(int i = 0; i < wordSize; i++){
        bool isUniq = true;
        for (int j = 0; j < wordSize ; ++j) {

            if(compare(word[i],word[j]) == 0 && i != j) {
                isUniq = false;
                break;
            }
        }

        if(isUniq) {
            ll j = 0;
            while (word[i][j] != '\0')
                addch(word[i][j++]);
            addch(' ');
        }

    }
}

ll getArrayOfWord(){
    ll wordIterator = 0;
    ll letterIterator;
    ll i = 0;
    while( buf[i] != '\0'){
        letterIterator = 0;
        ll k = i;
        word[wordIterator][0] = '\0';
        while(buf[k] != ' ' && buf[k] != '\0')
            word[wordIterator][letterIterator++] = buf[k++];

        if(word[wordIterator][0] != '\0')
            word[wordIterator++][letterIterator] = '\0';


        i = k+1;
    }

    return wordIterator;
}

int main() {
    initscr();
    noecho();
    cbreak();
    keypad(stdscr,TRUE);

    readText();
    ll wordSize = getArrayOfWord();
    printWords(wordSize);

    refresh();
    getch();
    endwin();
}