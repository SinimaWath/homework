#include "print.h"

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
        max_col_r = k == 0? min(max_col_t, ncol)  :min(max_col_r + max_col_t, ncol);

        for (int i = 0; i < nrow; ++i) {
            for (int j = start; j < max_col_r; ++j)
                cout<< setw(w) << matrix[i][j];
            cout << '\n';
        }
        cout << '\n';
    }

}
