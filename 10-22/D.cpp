//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	long long onhandstock = 0;
	long long onhandamount = 100;
	int prices[t];
	for (int i=0; i<t; i++) {
		cin >> prices[i];
	}
	for (int i=0; i<t-1; i++) {
		if (prices[i+1] < prices[i]) {
			onhandamount += onhandstock*prices[i];
			onhandstock = 0;
		} else if (prices[i+1] > prices[i]) {
			if (onhandstock + onhandamount/prices[i] <= 100000) {
				onhandstock += onhandamount/prices[i];
				onhandamount = onhandamount % prices[i];
			} else if (onhandstock < 100000) {
				onhandamount -= (100000-onhandstock)*prices[i];
				onhandstock = 100000;
			}
		}
	}
	onhandamount += onhandstock*prices[t-1];
	onhandstock = 0;
	cout << onhandamount << endl;
	return 0;
}