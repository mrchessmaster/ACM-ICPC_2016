#include <iostream>
#include <vector>

using namespace std;
bool used[10];
int best; int bestofall;
int brute(bool used[10],int l,int w,int curMax, int n, vector<vector<int> > v);

int main() {
	int n; cin >> n;
	vector<vector<int> > v;
	for (int i=0; i<n; i++) {
		vector<int> a;
		for (int j=0; j<3; j++) {
			int k; cin >> k;
			a.push_back(k);
		}
		v.push_back(a);
	}
	int numBoxes = 0;
	int currentBaseX = 0;
	int currentBaseY = 0;

	//for each remaining triple, try stack
	for (int i=0; i<n; i++) {
		used[i] = false;
	}
	bestofall = brute(used, 10e9, 10e9, 0, n, v);
	cout << bestofall << endl;

	return 0; 
}

int brute(bool used[10],int l,int w,int curMax, int n,vector<vector<int> > v) {
	best = curMax;
	for (int i=0; i<n; i++) {
		if (!used[i]) {
			used[i] = true;
			if (v.at(i).at(0) <= l && v.at(i).at(1) <= w) {
				best = max(brute(used, v.at(i).at(0), v.at(i).at(1), curMax + 1, n-1,v.erase(v.begin())),best);
			}
			if (v.at(i).at(0) <= l && v.at(i).at(2) <= w) {
				best = max(brute(used, v.at(i).at(0), v.at(i).at(2), curMax + 1, n-1,v.erase(v.begin())),best);
			}
			if (v.at(i).at(1) <= l && v.at(i).at(0) <= w) {
				best = max(brute(used, v.at(i).at(1), v.at(i).at(0), curMax + 1, n-1,v.erase(v.begin())),best);
			}
			if (v.at(i).at(1) <= l && v.at(i).at(2) <= w) {
				best = max(brute(used, v.at(i).at(1), v.at(i).at(2), curMax + 1, n-1,v.erase(v.begin())),best);
			}
			if (v.at(i).at(2) <= l && v.at(i).at(0) <= w) {
				best = max(brute(used, v.at(i).at(2), v.at(i).at(0), curMax + 1, n-1,v.erase(v.begin())),best);
			}
			if (v.at(i).at(2) <= l && v.at(i).at(1) <= w) {
				best = max(brute(used, v.at(i).at(2), v.at(i).at(1), curMax + 1, n-1,v.erase(v.begin())),best);
			}
			used[i] = false;
		}
	}
	return best;
}