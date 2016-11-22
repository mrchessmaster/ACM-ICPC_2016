#include <iostream>
#include <math.h>

using namespace std;

int main() {
	pair<int, int> g;
	int t; cin >> t;
	while (t--) {
		cin >> g.first >> g.second;
		int numDivisors = 0;
		int larger;
		if (abs(g.first) > abs(g.second)) {
			larger = g.first;
		} else {
			larger = g.second;
		}
		if (pow(g.first,2) + pow(g.second,2) > 1) {
			for (int m= -abs(larger); m<=abs(larger); m++) {
				for (int n= -abs(larger); n<=abs(larger); n++) {
					int temp = pow(m,2)+pow(n,2);
					if (temp > 0) {
						if ((m*g.first + n*g.second) % temp == 0 && (m*g.second - n*g.first) % temp == 0) {
							//cout << m << " " << n << endl;
							numDivisors++;
						}
					}
				}
			}
		}
		//cout << numDivisors << endl;
		if (numDivisors == 8) {
			cout << "P" << endl;
		} else {
			cout << "C" << endl;
		}
	}
	return 0;
}