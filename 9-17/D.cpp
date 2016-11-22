//#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int A[15504][6];
int main() {
	int x = 0;
	int a1,b1,c1,d1,e1,f1; 
	int k; 

	int i=0;
	for (int a=0; a<=15; a++) {
		for (int b=0; b<=15; b++) {
			for (int c=0; c<=15; c++) {
				for (int d=0; d<=15; d++) {
					for (int e=0; e<=15; e++) {
						for (int f=0; f<=15; f++) {
							if (a+b+c+d+e+f == 15) {
								A[i][0] = a;
								A[i][1] = b;
								A[i][2] = c;
								A[i][3] = d;
								A[i][4] = e;
								A[i][5] = f;
								i++;
							}
						}
					}
				}
			}
		}
	}


	while(true) {
		x++;
	
	string type; cin >> type;
	if (type == "e") {
		break;
	}

	if (type == "m") {
		cin >> a1 >> b1 >> c1 >> d1 >> e1 >> f1;
		if (a1+b1+c1+d1+e1+f1 != 15) {
			break;
		}
		for (int i=0; i<15504; i++) {
			if (A[i][0] == a1 && A[i][1] == b1 && A[i][2] == c1 && A[i][3] == d1 && A[i][4] == e1 && A[i][5] == f1) {
				cout << "Case " << x << ": " << i << endl;
			}
		}
	} else if (type == "u") {
		cin >> k;
		if (k > 15503 || k < 0) {
			break;
		}
		cout << "Case " << x << ": " << A[k][0] << " " << A[k][1] << " " << A[k][2] << " " << A[k][3] << " " << A[k][4] << " " << A[k][5] << endl; 
	} else {
		break;
	}
}

	return 0;
}


	// int i=0;
	// for (int a=0; a<=15; a++) {
	// 	for (int b=0; b<=15; b++) {
	// 		for (int c=0; c<=15; c++) {
	// 			for (int d=0; d<=15; d++) {
	// 				for (int e=0; e<=15; e++) {
	// 					for (int f=0; f<=15; f++) {
	// 						if (a+b+c+d+e+f == 15) {
	// 							if (type == "m"){
	// 								if (a == a1 && b == b1 && c == c1 && d == d1 && e == e1 && f == f1) {
	// 									cout << "Case " << x << ": " << i << endl;
	// 								}
	// 							} else if (type == "u") {
	// 								if (i == k) {
	// 									cout << "Case " << x << ": " << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl; 
	// 								}
	// 							}
	// 							i++;
	// 						}
	// 					}
	// 				}
	// 			}
	// 		}
	// 	}
	// }
							
								// A[i][0] = a;
								// A[i][1] = b;
								// A[i][2] = c;
								// A[i][3] = d;
								// A[i][4] = e;
								// A[i][5] = f;
								// if (type == "m") {
								// 	if (a == a1 && b == b1 && c == c1 && d == d1 && e == e1 && A[i][5] == f1) {
								// 	cout << "Case " << x << ": " << i << endl;
								// 	break;
								// 	}
								// } else if (type == "u") {
								// 	if (i == k) {
								// 		cout << "Case " << x << ": " << A[k][0] << " " << A[k][1] << " " << A[k][2] << " " << A[k][3] << " " << A[k][4] << " " << A[k][5] << endl; 
								// 		break;
								// 	}
								// }
								// i++;
									//else if (type == "u") {
	//	int k; cin >> k;
	//	cout << "Case " << x << ": " << A[k][0] << " " << A[k][1] << " " << A[k][2] << " " << A[k][3] << " " << A[k][4] << " " << A[k][5] << endl; 
	//}

