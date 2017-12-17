
#include "print.h"

long double det(long double**, int);
void matrixMultiplication(long double**, long double**, long double**, int);
void computeReverseMatrix(long double**, int);
void copyMatrix(long double**, long double**, int);

long double det(long double **matrix, int n){

    if(n == 2)
        return matrix[1][1]*matrix[0][0] - matrix[0][1]*matrix[1][0];

    int res = 0;
    auto temp = new long double*[n-1];

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            temp[j-1] = new long double[n-1];

            for(int k = 0, tempK = 0; k < n; k++,tempK++){
                if ( k == i){
                    tempK--;
                    continue;
                }
                temp[j-1][tempK] = matrix[j][k];
            }
        }
        res+= ( (i + 2) % 2 == 0 ? 1: - 1)*matrix[0][i]*det(temp, n-1);
    }

    for(int i = 0; i < n-1;i++)
        delete[] temp[i];

    delete[] temp;

    return res;
}

void matrixMultiplication(long double **a, long double **b, long double **product, int n){

    for (int i = 0; i < n; ++i) {
        product[i] = new long double[n];
        for (int j = 0; j < n; ++j) {
            product[i][j] = 0;
        }
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            for (int inner = 0; inner < n; inner++) {
                product[row][col] += a[row][inner] * b[inner][col];
            }
        }
    }
}

void computeReverseMatrix(long double **matrix, int n) {

    cout << "Прямой ход:\n\n";

    for (int i = 0; i < n; ++i) {
        cout << "Шаг " << i+1 << ": \n";
        long double point = matrix[i][i];
        int pointPos = i;

        for (int j = i; j < n*2; ++j)
            matrix[i][j]/=point;

        for(int j = i+1; j < n; ++j){
            long double point2 = matrix[j][i];
            for (int k = i; k < n*2; ++k) {
                matrix[j][k] -= point2*matrix[pointPos][k];
            }
        }

        print_matrix(matrix,n,n*2,3,FIXED);
    }

    cout << "Обратный ход: \n\n";

    for (int i = n-1 ; i > 0 ; --i) {
        cout << "Шаг " << n - i  << ": \n";
        int pointPos = i;

        for (int j = i - 1; j >= 0; --j) {
            long double point2 = matrix[j][i];
            for (int k = i; k < n*2 ; ++k)
                matrix[j][k] -= point2*matrix[pointPos][k];
        }

        print_matrix(matrix,n,n*2,3,FIXED);
    }
}

void copyMatrix(long double **a, long double **b, int n) {
    for (int i = 0; i < n ; ++i) {
        b[i] = new long double[n];
        for (int j = 0; j < n; ++j)
            b[i][j] = a[i][j+n];
    }

}

int main() {
    srand(time(0));

    double testSourceMatrix[3][3] = { {2,1,5},
                                      {2,2,3},
                                      {2,10,2}};
    // Matrix size;
    int n;
    cin >> n;
    auto sourceMatrix = new long double*[n];
    auto sourceMatrixCopy = new long double*[n];
    auto resultMatrix = new long double*[n];
    auto resultMulti = new long double*[n];

    for(int i = 0; i < n; i++) {
        sourceMatrix[i] = new long double[n * 2];
        sourceMatrixCopy[i] = new long double[n];
        for (int j = 0; j < n; j++) {
            std::cin >> sourceMatrix[i][j];
            //sourceMatrix[i][j] = testSourceMatrix[i][j];
            sourceMatrixCopy[i][j] = sourceMatrix[i][j];
        }
    }


    for (int i = 0; i < n ; ++i) {
        for (int j = n; j < n*2 ; ++j) {
            if((i + n) == j) sourceMatrix[i][j] = 1;
            else
                sourceMatrix[i][j] = 0;
        }
    }

    if( det(sourceMatrix, n) == 0){
        cout << "Нет обратной матрицы, так как определитель равен 0";
        return 0;
    }
    //TODO: print matrix
    cout << "Изначальная матрица:\n";
    print_matrix(sourceMatrix,n,n,2,FIXED);

    cout << "Вычисление матрицы методом Гауса\n";
    computeReverseMatrix(sourceMatrix,n);

    copyMatrix(sourceMatrix, resultMatrix,n);

    cout << "Вычисленная матрица:\n";
    print_matrix(resultMatrix,n,n,2,FIXED);

    matrixMultiplication(sourceMatrixCopy,resultMatrix,resultMulti,n);

    cout << "Результат умножения исходной и полученной матрицы:\n";
    print_matrix(resultMulti,n,n,2,FIXED);

    for(int i = 0; i < n;i++){
        delete[] sourceMatrix[i];
        delete[] sourceMatrixCopy[i];
        delete[] resultMatrix[i];
        delete[] resultMulti[i];
    }

    delete[] sourceMatrix; delete[] sourceMatrixCopy;
    delete[] resultMatrix; delete[] resultMulti;

    return 0;
}