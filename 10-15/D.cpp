#include <iostream>
#include <math.h>

using namespace std;

bool primeorzero(long long p) {
	if (p==0) return true;
	if (p==1) return false;
	if (p==2 || p==3) return true;
	for (int j=2; j<p; j++) {
		if (p % j == 0) return false;
	}
	return true;
}

int main() {
	int t; cin >> t;
	int n; double d; double x,y; double dcurr; long long max; bool outputted; 

	//cout << primeorzero(t) << endl;

	while (t--) {
		cin >> n >> d;
		dcurr = 0; x = 0; y = 0; max = 0;
		outputted = false;
		double arr[2*n];
		for (int i=0; i<2*n; i = i+2) {
			cin >> arr[i] >> arr[i+1];
		}
		for (int i=0; i<2*n; i = i+2) {
			dcurr += sqrt(pow(arr[i]-x,2) + pow(arr[i+1]-y,2));
			x = arr[i];
			y = arr[i+1];
			if ((dcurr - d) >= 10e-9 && primeorzero(max)) {
				outputted = true;
				cout << max << endl;
				break;
			} else if ((dcurr - d) >= 10e-9) {
				outputted = true;
				for (int k=max; k>=0; k--) {
					if (primeorzero(k)) {
						cout << k << endl;
						break;
					}
				}
				//cout << 0 << endl;
				break;
			}
			max++;
		}
		if (!outputted && primeorzero(max)) {
			cout << max << endl;
		}
		else if (!outputted) {
			for (int k=max; k>=0; k--) {
				if (primeorzero(k)) {
					cout << k << endl;
					break;
				}
			}
			//cout << 0 << endl;
		}
	}
	return 0;
}