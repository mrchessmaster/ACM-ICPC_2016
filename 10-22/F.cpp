#include <iostream>
#include <cmath>
//#include <bits/stdc++.h>

using namespace std;

int main() {
	double n, p; cin >> n >> p;
	double prob = 0;
	double t=1; double temp = 0; double times = 0;
	double jump = n/2;
	while (true) {
		temp = p*t/(n+t);
		times = p-1;
		for (int i=n; i>n-times; i--) {
			temp *= i;
			temp /= i+t-1;
		}
		cout << "t > p" << endl;
		cout << "t = " << t << ": p=" << temp << endl;
		if (temp >= prob) {
			prob = temp;
		} else {
			t -= jump;
			jump /= 2;
			if (jump == 0) break;
			continue;
		}
		t += jump;
	}
	cout << prob << endl;
	return 0;
}