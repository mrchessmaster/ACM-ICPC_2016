#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;
	


int main(){
	int p; int k; long long y;
	int fib[2][2];
	fib[0][0] = 1;
	fib[0][1] = 1;
	fib[1][0] = 1;
	fib[1][1] = 0;
	
	cin >> p;
	for (int i=0; i<p; i++) {
		cin >> k;
		cin >> y;
		long long F[y+1];
		F[0]=0; F[1]=1; F[2]=1;
		for (int j=3; j<=y; j++) {
			F[j] = F[j-1] + F[j-2];
			F[j] = F[j]%1000000000;
		}
		cout << k << " " << F[y] << endl;
	}
	return 0;
}
