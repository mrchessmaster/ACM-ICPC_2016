#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	while (true) {
		string test; cin >> test;
		if (test == "0") break;
		vector<int> v;
		for (int i=1; i<test.length(); i++) {
			int temp = test[i] - '0';
			int count = 0;
			if (temp == 0) {
				for (int j=0; j<v.size(); j++) {
					if (i % v[j] == 0) {
						count++;
					}
				}
				if (count % 2 == 1) v.push_back(i);
			}
			else {
				for (int j=0; j<v.size(); j++) {
					if (i % v[j] == 0) {
						count++;
					}
				}
				if (count % 2 == 0) v.push_back(i);
			}
		}
		for (int i=0; i<v.size()-1; i++) {
			cout << v[i] << " ";
		}
		cout << v[v.size()-1] << endl;
	}
	return 0;

}