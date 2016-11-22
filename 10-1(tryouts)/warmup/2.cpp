#include <iostream>
#include <math.h>

using namespace std;

double PI = atan(1)*4;

double totalLength(double dv1, double dv2, double dv3, double r) {
	double length = dv1+dv2+dv3;
	for (int q=1; q<=floor(r); q++) {
		length += PI*2*q;
	}
	return length;
}

int main() {
	int t; cin>> t;
	for (int i=0; i<t; i++) {
		double l1, l2, l3;
		double ax,ay,bx,by,cx,cy; cin>>ax>>ay>>bx>>by>>cx>>cy;
		l1 = sqrt(pow(bx-ax,2)+pow(by-ay,2));
		l3 = sqrt(pow(cx-bx,2)+pow(cy-by,2));
		l2 = sqrt(pow(cx-ax,2)+pow(cy-ay,2));
		double a = (l1+l2-l3)/2;
		double b = (l1-l2+l3)/2;
		double c = (-l1+l2+l3)/2;
		double A = acos((pow(l3,2)-pow(l1,2)-pow(l2,2))/(-2*l1*l2));
		double B = acos((pow(l2,2)-pow(l1,2)-pow(l3,2))/(-2*l1*l3));
		double C = acos((pow(l1,2)-pow(l2,2)-pow(l3,2))/(-2*l2*l3));
		double r = tan(A/2)*a;
		r = tan(B/2)*b;
		double dv1 = sqrt(pow(a,2)+pow(r,2));
		double dv2 = sqrt(pow(b,2)+pow(r,2));
		double dv3 = sqrt(pow(c,2)+pow(r,2));
		double total = totalLength(dv1,dv2,dv3,r);
		cout.precision(9);
		cout << total << endl;
	}
	return 0;
}