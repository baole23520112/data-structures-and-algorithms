#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1e9 + 7;

struct Matrix {
    vector<vector<long long>> mat;
    int size;

    Matrix(int n) : size(n) {
        mat.resize(n, vector<long long>(n));
    }

    static Matrix identity_matrix(int n) {
        Matrix I(n);
        for (int i = 0; i < n; i++)
            I.mat[i][i] = 1;
        return I;
    }

    Matrix operator*(const Matrix& other) const {
        Matrix product(size);
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                for (int k = 0; k < size; k++)
                    product.mat[i][j] = (product.mat[i][j] + mat[i][k] * other.mat[k][j] % MOD) % MOD;
        return product;
    }

    Matrix exp(long long power) {
        Matrix result = identity_matrix(size);
        Matrix base = *this;
        while (power) {
            if (power & 1) result = result * base;
            base = base * base;
            power >>= 1;
        }
        return result;
    }
};

int main() {
    int a, b, c, d;
    long long n;
    cin >> a >> b >> c >> d >> n;

    if (n == 0) {
        cout << b << endl;
        return 0;
    }
    if (n == 1) {
        cout << a << endl;
        return 0;
    }

    // Transition matrix setup
    Matrix T(5);
    T.mat = {{3, 2, 1, 1, 1},  // F(n) = 3*F(n-1) + 2*F(n-2) + G(n) + G(n-1) + G(n-2)
             {1, 0, 0, 0, 0},  // F(n-1)
             {0, 0, 1, 2, 0},  // G(n) = G(n-1) + 2*G(n-2)
             {0, 0, 1, 0, 0},  // G(n-1)
             {0, 0, 0, 1, 0}}; // G(n-2)

    Matrix result = T.exp(n - 1);
    long long Fn = (result.mat[0][0] * a % MOD + result.mat[0][1] * b % MOD + 
                   result.mat[0][2] * c % MOD + result.mat[0][3] * d % MOD + 
                   result.mat[0][4] * d % MOD) % MOD;

    cout << Fn << endl;
    return 0;
}
 