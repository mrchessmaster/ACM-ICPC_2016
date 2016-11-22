#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int t; cin >> t;
	int cal;
	while (t--) {
		cin >> cal;
		if (cal == 0) cout << 0 << endl;
		else cout << (cal-1)/400 + 1 << endl;
	}
	return 0;
}