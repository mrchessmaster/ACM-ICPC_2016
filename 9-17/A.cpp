#include <iostream>
#include <vector>

using namespace std;

int box[10][3];
bool used[10];
int l; int w;
int n;

int rec(used,int l,int w) {
	for (int i=0; i<n; i++) {
		if (!used[i]) {
			used[i] = true;
			stack(box[i],l,w);
			used[i] = true;
		}
	}
}
