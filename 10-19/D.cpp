#include <iostream>
#include <vector>

using namespace std;

int main() {
	int r, c; cin >> r >> c;
	vector<string> sa; string temp;
	int v[r][c];
	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {
			v[i][j] = 0;
		}
	}
	for (int i=0; i<r; i++) {
		cin >> temp;
		sa.push_back(temp);
	}
	pair<int,int> cur; cur.first = 0; cur.second = 0; v[cur.first][cur.second] = 1;
	int travelled = 0;
	while (true) {
		if (sa.at(cur.first).substr(cur.second,1) == "E") {
			cur.second++;
		} else if (sa.at(cur.first).substr(cur.second,1) == "S") {
			cur.first++;
		} else if (sa.at(cur.first).substr(cur.second,1) == "W") {
			cur.second--;
		} else if (sa.at(cur.first).substr(cur.second,1) == "N") {
			cur.first--;
		} else if (sa.at(cur.first).substr(cur.second,1) == "T") {
			cout << travelled << endl;
			break;
		}
		travelled++;
		if (cur.first >= r || cur.first < 0 || cur.second >= c || cur.second < 0) {
			cout << "Out" << endl;
			break;
		}
		if (v[cur.first][cur.second]) {
			cout << "Lost" << endl;
			break;
		} else {
			v[cur.first][cur.second] = 1;
		}
	}
	return 0;
}