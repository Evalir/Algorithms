#include <bits/stdc++.h>
#define N 100
using namespace std;
using ll = int;
const int MOD = 1e9+7;
struct Matrix {
	vector<vector<ll>> M;
	Matrix() {
		M = vector<vector<ll>> (N, vector<ll>(N));
	}
	
	Matrix operator*(Matrix &b) const {
		Matrix C = Matrix();
		for(int i = 0; i < N; ++i)
			for(int j = 0; j < N; ++j)
				for(int k = 0; k < N; ++k)
					C.M[i][j] = (C.M[i][j] + 1LL * M[i][k] * b.M[k][j]) % MOD;
		return C;
	}
	
	Matrix operator+(const Matrix &b) const {
		Matrix C = Matrix();
		for(int i = 0; i < N; ++i)
			for(int j = 0; j < N; ++j)
				C.M[i][j] = M[i][j] + b.M[i][j];
		return C;
	}
	
	Matrix unit() {
		Matrix C;
		for(int i = 0; i < N; i++)
			C.M[i][i] = 1;
		return C;
	}
};

Matrix modPow(Matrix A, int n) {
	if (n == 0)
		return A.unit();
	Matrix h = modPow(A, n / 2);
	Matrix o = h*h;
	if (n % 2)
		o = o*A;
	return o;
}

int main() {
	Matrix A, B;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			A.M[i][j] = 3;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			B.M[i][j] = 3;
	Matrix C = A + B;
	modPow(C, 2);
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) 
			cout << C.M[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
