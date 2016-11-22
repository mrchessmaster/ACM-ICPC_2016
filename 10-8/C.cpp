#include <iostream>
#include <math.h>

using namespace std;

long long n, m, a, b, c, t;
int bin[8];
//long long svec[52]; long long temp[52];

//long long tempmat[52][52];

long long [][] squaremat(long long mat[][]) {
	int rows = sizeof(mat)/sizeof(mat[0]);
    int cols = sizeof(mat[0])/sizeof(mat[0][0]);
	long long ret[rows][cols];
	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			ret[i][j] = mat[i][j]*mat[j][i];
		}
	}
	return ret;
}

long long [] multiplymat(long long mat[][], long long vec[]) {
	for (int i=0; i<n; i++) {
		temp[i] = matrix[i][0]*svec[0];
		for (int j=1; j<n; j++) {
			temp[i] += matrix[i][j]*svec[j];
		}
	}
	retunr;
}


int main() {
	while (true) {

		cin >> n >> m >> a >> b >> c >> t;
		if (n == 0 && m == 0 && a == 0 && b == 0 && c == 0 && t == 0) break;

		long long svec[n]; long long temp[n];
		for (int i=0; i<n; i++) {
			cin >> svec[i];
		}

		long long matrix[n][n];
		memset(matrix, -1, sizeof matrix);

		// fill matrix
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				if (i == j+1) matrix[i][j] = a;
				else if (i == j) matrix[i][j] = b;
				else if (i == j-1) matrix[i][j] = c;
				else matrix[i][j] = 0; 
			}
		}


		// long long tempmat[n][n] = matrix;
		// square the matrix:
		for (int k = n; k > 1; k = k/2) {
			counter++;
			for 

			matrix = squaremat(matrix);
		}


		// multiply matrix once:
		for (int i=0; i<n; i++) {
			temp[i] = matrix[i][0]*svec[0];
			for (int j=1; j<n; j++) {
				temp[i] += matrix[i][j]*svec[j];
			}
		}
		// override svec with temp:
		for (int i=0; i<n; i++) {
			svec[i] = temp[i];
		}

		for (long long i=0; i<n; i++) {
			if (i == n-1) cout << state[i][t] << endl;
			else cout << state[i][t] << " ";
		}
	}
	
	return 0;
}