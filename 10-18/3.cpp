#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int r; cin >> r; int n; cin >> n;
	int a[r+1]; int f;
	memset(a, 1, sizeof a);
	while(n--) {
		cin >> f;
		a[f] = 0;
	}
	bool late=true;
	for (int i=1; i<r+1; i++) {
		if (a[i]) {
			cout << i << endl;
			late = false;
			break;
		}
	}
	if (late) cout << "too late" << endl;
	return 0;
}