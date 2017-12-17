#include<iostream>
#include <io.h>
#include <fcntl.h>
#include <windows.h>
#include<iomanip>

void iteration(int);
void half(int);
void nuton(int);
void define_prec();

double EPS =  0.000001;
int prec_count = 6;

using namespace std;
void iteration(int k) {
        double x = 2.0, y;
        int n = 0;
        do {
                y = x;
                x = k*cos(x);
                n++;
                if (n >= 100000)
                        break;
        } while (fabs(y - x) > EPS);

        wcout << L"Значение аргумента х = "
                << setprecision(prec_count) << x
                << L" количество шагов(n) = "
                << n << endl;
}

void half(int k) {
        double left_c = 0.0, right_c = 1.0, center, n =0;
        do {
                center = (left_c + right_c) / 2;
                if ((center - k*cos(center)) * (left_c - k*cos(left_c)) < 0)
                        right_c = center;
                else if ((center - k*cos(center)) * (right_c - k*cos(right_c)) < 0)
                        left_c = center;

                n++;
                if (n >= 100000)
                        break;
        } while (fabs((center - k*cos(center)))  > EPS and n < 100000);
        wcout << L"Значение аргумента х = "
                << setprecision(prec_count) << center
                << L" количество шагов(n) = "
                << n << endl;
        return;
}

void nuton(int k) {
        double x = 2.0, y;
        int n = 0;
        do {
                y = x;
                x = (x - (x - k*cos(x)) / (1 + k*sin(x)));
                n++;
                if (n >= 100000)
                        break;
        } while (fabs(y - x) > EPS);

        wcout << L"Значение аргумента х = "
                << setprecision(prec_count) << x
                << L" количество шагов(n) = "
                << n << endl;
        return;
}

void define_prec() {
        double EPS1 = EPS;
        prec_count = 0;

        while (EPS1 < 1) {
                EPS1 *= 10;
                prec_count++;
        }
}

int main()
{
        _setmode(_fileno(stdout), _O_U16TEXT);
        do {
                int k;
                char ch;
                wcout << L"Решение уравнения x - k*cos(x) = 0\n";
                wcout << L"Введите точность вычислений(EPS по умолчанию 0.000001): \n";
                wcout << L" Точность 6 знаков - S, Точность 8 - T: \n";
                cin >> ch;
                if (ch == 'S')
                        EPS = 0.000001;
                else if (ch == 'T')
                        EPS = 0.00000001;

                wcout << L"Выберете коофэциент k:\n";
                cin >> k;

                wcout << L"Выберете метод:\n"
                        << L"1. Метод итераций\n"
                        << L"2. Метод Ньютона\n"
                        << L"3. Метод половинного деления\n";

                define_prec();

                int c;
                cin >> c;

                switch(c) {
                        case 1:
                                iteration(k);
                                break;
                        case 2:
                                nuton(k);
                                break;
                        case 3:
                                half(k);
                                break;
                        default:
                                wcout << L"Ошибка ввода\n";
                                break;
                }

                do {
                        wcout << L"Хотите выполнить программу еще раз? Да/нет (y/n)\n";
                        char c;
                        cin >> c;

                        if (c == 'n')
                                return 0;
                        else if (c == 'y')
                                break;
                        else
                                wcout << L"Неправильный ввод\n";
                } while (true);


        } while (true);