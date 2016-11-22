#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;
	


int main(){
	int p; int k; int n;
	int s1; int s2; int s3;
	cin >> p;
	for (int i=0; i<p; i++) {
		cin >> k;
		cin >> n;
		s1 = n*(n+1)/2;
		s2 = 0; s3 = 0; 
		// while (j <= n) {
		// 	s2 += 2*j-1;
		// 	s3 += 2*j;
		// 	j++;
		// }
		for (int j=1; j<=n; j++) {
			s2 += 2*j-1;
			s3 += 2*j;
		}
		cout << k << " " << s1 << " " << s2 << " " << s3 << endl;
	}
	return 0;
}
