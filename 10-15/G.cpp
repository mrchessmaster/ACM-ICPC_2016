#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int palindrome(string str) {
	int ret = 0;
	bool temp = true;
	for (int k=0; k<str.length()/2; k++) {
		if (!(str.substr(k,1) == str.substr(str.length()-k-1,1))) {
			temp = false;
		}
	}
	if (temp) ret++;
	for (int k=0; k<str.length(); k++) {
		string ostr = str;
		str.erase(k,1);
		ret += palindrome(str);
		str = ostr;
	}
	return ret;
}

int main() {
	int t; cin >> t;
	int ans; string s;



	while (t--) {
		cin >> s;
		
		for (int )
		cout << palindrome(s) << endl;
	}
	return 0;
}