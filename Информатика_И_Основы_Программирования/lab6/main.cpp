#include <iostream>
#include <cmath>
#include<iomanip>
#include <cstring>

using namespace std;


struct I_print{
    const char *name;
    double i_sum;
    double i_toch;
    int n;
};


typedef double (*TPF)(double);

    double f1(double);
    double f2(double);
    double f3(double);
    double f4(double);
    double f_t(double,double,int);
    double IntRec(TPF, double, double, double, int&);
    double IntTrap(TPF, double, double, double, int&);

    double PrintTabl(I_print*,double);

double f_t(double a, double b, int type){
    double y = 0.0;
    switch(type){
        case 1:
            y = (b*b - a*a)/2.0;
            break;
        case 2:
            y = (cos(a*22.0) - cos(b*22.0))/22.0;
            break;
        case 3:
            y = (b*b*b*b*b - a*a*a*a*a)/5.0;
            break;
        case 4:
            y = b*atan(b) - a*atan(a) - (log(b*b + 1) - log(a*a + 1))/2.0;
            break;
        default:
            cout << "Такой функции нет "<<endl;
            y = 0.0;
            break;
    }

    return y;
}
double f1(double x){
    return x;
}
double f2(double x){
    return sin(22*x);
}
double f3(double x){
    return pow(x,4);
}
double f4(double x){
    return atan(x);
}

double IntRec(TPF f, double a, double b, double eps, int &n){
    double dx;
    double S0, S=0.0;
    int step = 5;
    do{

        S0 = S;
        S = 0.0;
        dx = fabs(a - b)/ step;
        for(int i = 0; i < step; i++)
            S += f(a+dx*(i+0.5));

        S*=dx;
        step*=2;
    }while(fabs(S-S0) > eps);
    n = step;
    return S;
}

double IntTrap(TPF f, double a, double b, double eps, int &n){
    double S = 0.0, S0, dx;
    int step = 5;
    do{
        S0 = S;
        S = 0;
        dx = (b-a)/step;
        for(double i = a; i < b; i +=dx)
            S +=(f(i+dx) + f(i))/2*dx;
        step*=2;
    }while(abs(S0-S)>eps);
    n = step;
    return S;
}

void PrintTabl(I_print *i_prn,int k)
{
    const int m=4;//число столбцов таблицы
    int wn[m]={12,18,18,10};//ширина столбцов таблицы
    char *title[m]={"Function","Integral","IntSum","N "};
    int size[m];
    for(int i=0;i<m;i++)
        size[i]=strlen(title[i]);
//шапка таблицы
    cout<<char(218)<<setfill(char(196));
    for(int j=0;j<m-1;j++)
        cout<<setw(wn[j])<<char(194);
    cout<<setw(wn[m-1])<<char(191)<<endl;

    cout<<char(179);
    for(int j=0;j<m;j++)
        cout<<setw((wn[j]-size[j])/2)<<setfill(' ')<<' '<<title[j]
            <<setw((wn[j]-size[j])/2)<<char(179);
    cout<<endl;
    for(int i=0;i<k;i++)
    {//заполнение таблицы
        cout<<char(195)<<fixed;
        for(int j=0;j<m-1;j++)
            cout<<setfill(char(196))<<setw(wn[j])<<char(197);
        cout<<setw(wn[m-1])<<char(180)<<setfill(' ')<<endl;

        cout<<char(179)<<setw((wn[0]-strlen(i_prn[i].name))/2)<<' '<<i_prn[i].name
            <<setw((wn[0]-strlen(i_prn[i].name))/2)<<char(179);
        cout<<setw(wn[1]-1)<<setprecision(10)<<i_prn[i].i_toch<<char(179)
            <<setw(wn[2]-1)<<i_prn[i].i_sum<<setprecision(5)<<char(179)
            <<setw(wn[3]-1)<<i_prn[i].n<<char(179)<<endl;
    }
//низ таблицы
    cout<<char(192)<<setfill(char(196));
    for(int j=0;j<m-1;j++)
        cout<<setw(wn[j])<<char(193);
    cout<<setw(wn[m-1])<<char(217)<<setfill(' ')<<endl;
}

int main() {
    I_print *i_print = new I_print[4];
    const char *name[4] = {"y=x", "y=sin(22*x)", "y=x^4", "y=arctg(x)"};
    TPF functs[4] = {f1, f2, f3, f4};

    double a = -1, b = 3;
    double eps = 0.01;

    cin >> a >> b;

    cout << "Метод прямоугольником\n";
    cout << "Область интегрированния функций: " << a << "<=x<= " << b << endl;
    for (int ik = 0; ik < 4; ++ik) {

        cout << "Точность вычислений = " << eps << endl;

        for (int i = 0; i < 4; i++) {
            i_print[i].i_toch = f_t(a, b, i + 1);
            i_print[i].i_sum = IntRec(functs[i], a, b, eps, i_print[i].n);
            i_print[i].name = name[i];
        }

        PrintTabl(i_print,4);
        cout << "\n";

        eps *= 0.1;
    }

    eps = 0.01;
    cout << "Метод трапецией\n";
    cout << "Область интегрированния функций: " << a << "<=x<= " << b << endl;
    for (int ik = 0; ik < 4; ++ik) {

        cout << "Точность вычислений = " << eps << endl;

        for (int i = 0; i < 4; i++)
            i_print[i].i_sum = IntTrap(functs[i], a, b, eps, i_print[i].n);

        PrintTabl(i_print, 4);
        cout << "\n";

        eps *= 0.1;
    }


    char c;
    cin >> c;
    return 0;
}


