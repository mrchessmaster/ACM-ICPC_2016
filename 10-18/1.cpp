#include <iostream>
#include <bitset>
#include <math.h>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int temp; cin >> temp;
		for (int i=0; i<256; i++) {
			if ((i ^ ((i*2) % 256)) == temp) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}