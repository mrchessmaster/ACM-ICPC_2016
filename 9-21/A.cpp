#include <iostream>
 
using namespace std;

int n; int t;
int position;
int portal[30000];
string canvisit = "NO";

int main() {
	cin >> n; cin >> t;
	for (int i=1; i<n; i++) {
		cin >> portal[i];
	}
	position = 1;
	int i = position;
	while(true) {
		if (position == t) {
			canvisit = "YES";
			break;
		} else if (position == n) {
			break;
		}
		position += portal[i];
		i = position;
	}
	cout << canvisit << endl;
	return 0;
}