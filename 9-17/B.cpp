//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int c = 0;
	while(true) {
		c++;
		int n; cin >> n;
		if (n==0) {break;}
		int x[n]; int y[n];
		for (int i=0; i<n; i++) {
			cin >> x[i] >> y[i];
		}
		sort(x,x+n);
		sort(y,y+n);

		int xmed = x[(n-1)/2];
		int ymed = y[(n-1)/2];
		int dist = 0;
		for (int i=0; i<n; i++) {
			dist += abs(x[i] - xmed);
			dist += abs(y[i] - ymed);
		}

		cout << "Case " << c << ": (" << xmed << "," << ymed << ") " << dist << endl;
	}
	return 0;
}