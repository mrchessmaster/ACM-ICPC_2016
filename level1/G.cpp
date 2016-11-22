#include <iostream>
#include <cmath>

using namespace std;

bool square(int n) {
	int sr = floor(sqrt(n));
	if (sr*sr == n) return true;
	return false;
}

bool triangular(int n) {
	int sr = floor(sqrt(2*n));
	if (sr*(sr+1) == 2*n) return true;
	return false;
}

int main() {
	int a, b; 
	int c = 0;
	while (++c) {
		cin >> a >> b;
		if (a == 0 && b == 0) return 0;
		int count = 0;
		for (int i=a+1; i<b; i++) {
			if (square(i) && triangular(i-1)) count++;
		}
		cout << "Case " << c << ": " << count << endl;
	}
	return 0;
}