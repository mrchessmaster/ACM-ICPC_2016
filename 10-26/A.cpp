#include <iostream>
#include <cstring>

using namespace std;

int vis[200005];
// 0 if visited and stays, 1 if visited and bumps off
int n;
string s;

// output 1 if bumps off, 0 if not
int startat(int i) {
	if (vis[i] != -1) return vis[i];
		vis[i] = 1;

	if (i < 0 || i >= n) {
		return 1;
	}
	if (vis[i] == 1) {
		return 0;
	}
	//cout << "good" << endl;

	if (s.at(i) == '>') {
		return startat(i+1);
	}
	else {
		return startat(i-1);
	}
}

int main() {
	cin >> n;
	cin >> s;
	int ret = 0;
	memset(vis, -1, sizeof vis);
	for (int i=0; i<n; i++) {
		ret += startat(i);
	}
	cout << ret << endl;
	return 0;
}