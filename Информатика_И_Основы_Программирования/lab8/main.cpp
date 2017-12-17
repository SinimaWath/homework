#include <iostream>
#include <iomanip>
using namespace std;

enum Format_Print {
    FIXED, SCIENTIFIC
};

typedef long long ll;

ll pow(ll,ll);
ll factorial(ll);
void print_matrix(long double**, int, int, int, Format_Print);
void fill_matrix_A(long double **, int, int);

ll factorial(ll n){
    if(n > 1)
        return n* factorial(n-1);
    else
        return 1;
}

ll pow(ll a,ll b){
    ll res = 1;
    for (int i = 0; i < b; ++i)
        res*=a;
    return res;
}
void print_matrix(long double **matrix, int nrow, int ncol, int prec, Format_Print format){
    int w;
    switch (format){
        case FIXED:
            cout << fixed;
            w = prec + 5;
            break;
        case SCIENTIFIC:
            cout << scientific;
            w = prec + 9;
            break;
    }
    // Максимальное количество столбцов в 1 Большой строке
    int max_col_t = 80 / w;
    //Количество столбцов в k-ой Большой строке
    int max_col_r = 0;
    cout << setprecision(prec);

    int start;

    for (int k = 0; k <= ncol/max_col_t ; ++k) {

        start = k == 0? 0 : max_col_r;
        max_col_r = k == 0? max_col_t  :min(max_col_r + max_col_t, ncol);

        for (int i = 0; i < nrow; ++i) {
            for (int j = start; j < max_col_r; ++j)
                cout<< setw(w) << matrix[i][j];
            cout << '\n';
        }
        cout << '\n';
    }

}

void fill_matrix_A(long double **matrix, int nrow, int ncol){
    for (int i = 0; i < nrow; ++i) {
        for (int j = 0; j < ncol; ++j) {
            if(i == j) matrix[i][j] = 1;
            if(j > i) matrix[i][j] = pow(1,i) * 1.0/pow(factorial(j),i);
            if(j < i) matrix[i][j] = pow((-1),i) * 1.0/pow(factorial(j),i);
        }
    }
}
int main() {
    int nrow, ncol;
    cin >> nrow >> ncol;
    long double **A_matrix = new long double*[nrow];
    for (int i = 0; i < nrow; ++i) {
        A_matrix[i] = new long double[ncol];
    }

    fill_matrix_A(A_matrix,nrow,ncol);
    print_matrix(A_matrix,nrow,ncol,10,SCIENTIFIC);



    return 0;
}