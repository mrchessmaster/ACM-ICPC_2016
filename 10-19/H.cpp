#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool contains(vector<string> v, string s) {
	if(std::find(v.begin(), v.end(), s) != v.end()) {
    	return true;
	} else {
    	return false;
	}
}

int main() {
	int t; cin >> t;
	int pairs;
	while (t--) {
		cin >> pairs;
		vector<vector<string> > networks;
		vector<string> network;
		while (pairs--) {
			int ret = 0;
			string s1, s2; cin >> s1 >> s2;
			if (!contains(network,s1)) {
				network.push_back(s1);
			}

			cout << ret << endl;
		}

	}
	return 0;
}

// intpairscin >> pairs;
// vector<pair<string,int> > a;
// while (pairs--) {
// 	bool contains1 = false; bool contains2 = false;
// 	string s1,s2; cin >> s1 >> s2;
// 	pair<string, int>* temp1; pair<string, int>* temp2; 
// 	for (int i=0; i<a.size(); i++) {
// 		if (a.at(i).first == s1) {
// 			contains1 = true;
// 			temp1 = &a.at(i);
// 		}
// 		else if (a.at(i).first == s2) {
// 			contains2 = true;
// 			temp2 = &a.at(i);
// 		}
// 	}
// 	if (!contains1) {
// 		temp1 = new pair<string,int>; 
// 		temp1.first = s1; temp1.second = 0;
// 	}
// 	if (!contains2) {
// 		temp2 = new pair<string,int>; 
// 		temp2.first = s2; temp2.second = 0;
// 	}
// 	temp1.second++; temp2.second++;
// 	cout << temp1.second + temp2.second << endl;
	
// }