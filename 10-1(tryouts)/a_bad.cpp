#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int findlongestpath(int arr[],bool arrvisited[], int curMax, int curPos, int curTravelled,int n,int m);

int main() {
	int t; cin>> t;
	int n; int m; 
	for (int i=0; i<t; i++) {
		cin >> n >> m;
		int arr[n]; bool arrvisited[n];
		for (int j=0; j<n; j++) {
			cin >> arr[j];
			arrvisited[j] = false;
		}
		int curMax = 1;
		int curPos = 0;
		int curTravelleds = 0;
		
		int longestpath = 0;

		longestpath = findlongestpath(arr,arrvisited,curMax,0,curTravelleds,n,m);
		cout << longestpath << endl;
	}
	return 0;
}

int findlongestpath(int arr[],bool arrvisited[], int curMax,int curPos,int curTravelled,int n,int m) {
	arrvisited[curPos] = true;
	bool stillcurmax = false;
	for (int k=0; k<n; k++){
		if (arr[k] == curMax && !arrvisited[k]) {
			stillcurmax = true;
			break;
		}
	}
	if (!stillcurmax) {
		if (curMax < m) {
			curMax++;
		} else {
			return curTravelled; // ??
		}
	} 

	int currlongestpath = 0; int longestk = 0;

	for (int k=0; k<n; k++) {
		if (arr[k] == curMax && !arrvisited[k]) {
			//curTravelled += abs(curPos - k);
			//curPos = k;
			//cout << findlongestpath(arr,arrvisited,curMax,k,curTravelled+abs(curPos - k),n,m) << endl;
			int temp = findlongestpath(arr,arrvisited,curMax,k,curTravelled+abs(curPos - k),n,m);
			if (temp > currlongestpath) {
				//cout << findlongestpath(arr,arrvisited,curMax,k,curTravelled+abs(curPos - k),n,m) << endl;
				currlongestpath = temp;
				//cout << currlongestpath << endl;
				//return;
				longestk = k;
			}
		}
	}

	curTravelled = abs(curPos - longestk) + currlongestpath;
	//curTravelled = currlongestpath;


	return curTravelled;
}
