#include <iostream>

using namespace std;

int main() {
	int t; cin>> t;
	int n; 

	for (int i=0; i<t; i++) {
		cin >> n;
		int arr[n];
		int odds =0; int evens = 0;
		for (int j=0; j<n; j++)  {
			cin >> arr[j];
			if (arr[j] % 2 == 0) {
				evens++;
			} else {
				odds++;
			}
		}
		if (evens == 1) {
			for (int j=0; j<n; j++) {
				if (arr[j] % 2 == 0) {
					cout << j + 1 << endl;
				} 
			}
		} else {
			for (int j=0; j<n; j++) {
				if (arr[j] % 2 != 0) {
					cout << j + 1 << endl;
				} 
			}
		}
	}
	return 0;
}