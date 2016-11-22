#include <iostream>
//#include <vector>
//#include <math.h>

using namespace std;

int findLeft(int arr[], int a, int n);
int findRight(int arr[], int a, int n);


int main() {
	int t; cin>> t;
	for (int i=0; i<t; i++) {
		int n; int m; 
		cin >> n >> m;
		int arr[n]; //bool arrv[n];
		for (int j=0; j<n; j++) {
			cin >> arr[j];
			//arrv[j] = false;
		}

		int curpos = 0; int curtravelled = 0;
		if (m==1) {
			cout << 0 << endl;
		} else if (m==2) {
			int temp = 0;

		if (findLeft(arr,1,n) < findLeft(arr,2,n)) {
			temp = findRight(arr,m,n);
			curpos = 0;

		} else {
			temp = findLeft(arr,m,n);
			curpos = n-1;
		}
		curtravelled += abs(curpos - temp);
		curpos = temp;


		cout << curtravelled << endl;

		} else {


		for (int j=1; j<=m-1; j++) {
			int temp = 0;
			
			if (findLeft(arr,j,n) < findLeft(arr,j+1,n)) {
				// go to first pos of j
				temp = findLeft(arr,j,n);
			} else {
				temp = findRight(arr,j,n);
			}
			if (j != 1) {
				curtravelled += abs(curpos - temp);
			}
			curpos = temp;
			if (j == m-1) {
				if (findLeft(arr,j,n) < findLeft(arr,j+1,n)) {
					temp = findRight(arr,j+1,n);
				}	else {
				temp = findLeft(arr,j+1,n);
				}
				curtravelled += abs(curpos - temp);
				curpos = temp;
			}
		}



		cout << curtravelled << endl;

		}
	}
	return 0;
}

int findLeft(int arr[], int a, int n) {
	for (int w=0; w<n; w++) {
		if (arr[w] == a) {
			return w;
		}
	}
	return 0;
}
int findRight(int arr[], int a, int n) {
	for (int w=n-1; w>=0; w--) {
		if (arr[w] == a) {
			return w;
		}
	}
	return 0;
}


