#include <iostream>
using namespace std;

int compare(const char *str1, const char *str2){


    while(*str1 == *str2) {
        if (*str1 == '\0')
            return 0;
        str1++,str2++;
    }

    return  *str1 < *str2? -1 : 1;

}

void strcopy(char *str1, char *str2) {

    while(*str2!='\0')
        *str1++=*str2++;
    ++*str1='\0';

}

int menu() {
    cout << "1. add word to dict\n";
    cout << "2. remove word from dict\n";
    cout << "3. translate english word\n";
    cout << "4. translate russian word\n";
    cout << "5. word list\n";
    cout << "6. output in file\n";
    cout << "7. exit\n";

    int n;
    cin >> n;

    return n;
}


