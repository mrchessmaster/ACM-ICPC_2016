#include <iostream>
#include <cmath>
#include <ctgmath>

using namespace std;

int main() {
	double n; cin >> n;
	double k; cin >> k;
	while (k--) {
		n /= 2;
		if (n<=1) break;
	}
	if (n<=1) cout << "Your wish is granted!" << endl;
	else cout << "You will become a flying monkey!" << endl;
}