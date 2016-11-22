#include <iostream>
#include <cmath>
//#include <bits/stdc++.h>

using namespace std;

int findprob(double n, double p, double t) {
	double temp = p*t/(n+t);
	double times = p-1;
	for (int i=n+t-1; i>n+t-1-times; i--) {
		temp /= i;
	}
	for (int i=n; i>n-times; i--) {
		temp *= i;
	}
	return temp;
}

int ternarysearch(double left, double right, double n, double p) {
	if (left <= right) return findprob(n, p, left);
	double temp = findprob(n, p, (left+right)/2);
	double leftres = ternarysearch(left, (left+right)/2-1, n, p);
	double rightres = ternarysearch((left+right)/2+1, right, n, p);
	double max = temp;
	if (leftres > max) max = leftres;
	if (rightres > max) max = rightres;
	return max;

}

int main() {
	double n, p; cin >> n >> p;
	double maxprob = 0;
	//double t=1;

	maxprob = ternarysearch(1,n,n,p);
	cout << maxprob << endl;

	return 0;
}