#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const long long MAX_LENGTH = 1000;
const char *KEY_PATH = "key.out";
const char *SOURCE_TEXT = "text.out";
const char *ENCRYPTED_TEXT = "enc_text.out";
const int ASCII_POWER = 256;

int get_key_val_arr(const char*,int*);
bool encrypt(const char*,const int*,int);
void statistic(unsigned char);
bool decode(const char*, const int*, int);

int get_key_val_arr(const char* path, int*key_val){
    unsigned char buf[MAX_LENGTH];
    int key_val_number = 0;

    ifstream key_file(path,ios::out);
    if(!key_file.is_open()){
        cout << "Can't open the file:" << path << "\n";
        return -1;
    }

    while(key_file >> buf){
        for (int i = 0; buf[i]; ++i) {
            key_val[key_val_number] += int(buf[i]);
        }
        key_val[key_val_number]%=ASCII_POWER;
        key_val_number++;

    }

    key_file.close();
    return key_val_number;
}

bool encrypt(const char* path, const int* key_val, int count_of_key){

    ifstream in(path,ios::in);
    if(!in.is_open()){
        cout << "There is no such file: " << path <<"\n";
        return false;
    }

    ofstream out(ENCRYPTED_TEXT, ios::out);
    if(!out.is_open()){
        cout << "Cannot open the file: " << ENCRYPTED_TEXT << "\n";
    }

    int c;
    for(int i = 0; (c = in.get()) != -1; i++){
        int p = (c + key_val[i%count_of_key])%ASCII_POWER;
        out << (unsigned char) p;
    }

    in.close();
    out.close();

    cout << '\n';
    return true;
}

bool decode(const char* path, const int* key_val, int count_of_key){
    ifstream in(path);
    if(!in.is_open()){
        cout << "Cannot open for reading file: " << path << "\n";
        return false;
    }

    ofstream out("decoded.out");
    if(!out.is_open()){
        cout << "Cannot open for reading file: decoded.out\n";
        return false;
    }

    int c;
    for (int i = 0; (c = in.get()) != -1; ++i) {
        out << (unsigned char) ((c - key_val[i%count_of_key] - ASCII_POWER)%ASCII_POWER);
    }

    in.close();
    out << '\n';
    return true;
}


void statistic(unsigned char c) {

    ifstream in_s(SOURCE_TEXT,ios::in);
    if(!in_s.is_open()){
        cout << "Cannot open for reading the file:" << SOURCE_TEXT << '\n';
        return;
    }
    ifstream in_e(ENCRYPTED_TEXT, ios::in);
    if(!in_e.is_open()){
        cout << "Cannot open for reading the file: " << ENCRYPTED_TEXT << '\n';
        return;
    }

    int s_c;
    int stat[256] = {0};
    size_t char_pos = 0;
    while((s_c = in_s.get()) != EOF){
        if(s_c == c) {
            in_e.seekg(char_pos);
            if (in_e.peek() != EOF)
                stat[in_e.get()]++;
        }
        char_pos++;
    }

    const char head[17] = {' ', '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    for(int i = 0; i < 17; i++){
        for (int j = 0; j < 17; ++j) {
            if(i == 0 || j == 0)
                cout << setw(4) << setfill(' ') << left << head[i + j];
            else
                if(stat[(i-1)*16 + (j-1)] != 0)
                    cout << setw(4) << setfill(' ') << left <<  stat[(i-1)*16 + (j-1)], stat[(i-1)*16 + (j-1)] = 0;
                else
                    cout << setw(4) << setfill(' ') << left << '.';

        }
        cout << '\n';
    }

    in_s.close();
    in_e.close();
}

int main() {

    int key_val[MAX_LENGTH] = {0};
    int count_of_key = get_key_val_arr(KEY_PATH,key_val);

    encrypt(SOURCE_TEXT,key_val,count_of_key);
    decode(ENCRYPTED_TEXT,key_val,count_of_key);
    do {
        unsigned char c;
        cout << '\n';
        cout << "Enter the letter which you will research: ";
        cin >> c;

        statistic(c);

        char ex;
        cout << "Will you continue researching?(y/n): ";
        cin >> ex;

        if(ex == 'n')
            break;
    }while(true);

    return 0;
}
