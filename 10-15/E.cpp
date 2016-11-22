#include <iostream>
#include <string>
#include <vector>

using namespace std;

string flip(string s) {
	string ret = "";
	for (int k=s.length(); k>0; k--) {
		ret.append(s.substr(k-1,1));
	}
	return ret;
}

int main() {
	int t; cin >> t;
	int r, c; string tempin;
	for (int i=1; i<=t; i++) {
		cin >> r >> c;
		vector<string> s_arr_out;
		//string s_arr_out[r];
		for (int j=0; j<r; j++) {
			cin >> tempin;
			s_arr_out.push_back(flip(tempin));
		}
		cout << "Test " << i << endl;
		for (int j=r-1; j>=0; j--) cout << s_arr_out.at(j) << endl;
	}
}