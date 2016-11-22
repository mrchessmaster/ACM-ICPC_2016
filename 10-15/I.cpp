#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t; cin >> t;
	int c; int n;
	while (t--) {
		cin >> c;
		long arr[c];
		for (int i=0; i<c; i++) {
			cin >> n;
			long timethis = 0; long thiswood;
			for (int j=0; j<n; j++) {
				cin >> thiswood;
				timethis += thiswood;
			}
			arr[i] = timethis;
		}
		sort(arr, arr+c);
		//sortarr(arr);
		long total = 0;
		for (int i=0; i<c; i++) {
		 	total += arr[i]*(c-i);
		}
		long double tot = total;
		long double customers = c;
		cout.precision(15);
		cout << tot / customers << endl;
	}
	return 0;
}