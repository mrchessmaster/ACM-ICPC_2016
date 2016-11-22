#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>


using namespace std;

int main() {
	while (true) {
		int c; cin >> c;
		if (c == 0) break;
		map<string, vector<string>> m;
		while (c--) {
			string s;
			getline(cin, s);
			istringstream iss(s);
			string name; iss >> name;
			while (iss) {
				string item; iss >> item;
				m[item].push_back(name);
			}
		}
		for (map<string, vector<string>>::const_iterator it = m.begin(); it != m.end(); it++) {
			cout << it->first;
			for (int i=0; i<it->second.size(); i++) {
				cout << it->second.at(i);
			}
			cout << endl;
		}
	}
	return 0;
}