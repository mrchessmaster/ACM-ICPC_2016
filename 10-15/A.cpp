#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {
	int t; cin >> t;
	string s_in;
	string bin_str;
	int maxnumones = 0; int numones = 0;
	while (t--) {
		cin >> s_in;
		for (int i=1; i<=s_in.length(); i++) {
			bitset<31> bin(stoi(s_in.substr(0,i)));
			bin_str = bin.to_string();
			numones = 0;
			for (int j=0; j<bin_str.length(); j++) {
				numones += stoi(bin_str.substr(j,1));
			}
			//cout << numones << endl;
			if (numones > maxnumones) {
				maxnumones = numones;
			}
		}
		cout << maxnumones << endl;
		maxnumones = 0;
	}
}