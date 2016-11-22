#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double n, p; cin >> n >> p;
	double t=floor(n/(p-1)); 
	double prob = p*t/(n+t);
	for (int i=n; i>n-(p-1); i--) {
		prob *= i/(i+t-1);
	}
	cout << prob << endl;
	return 0;
}