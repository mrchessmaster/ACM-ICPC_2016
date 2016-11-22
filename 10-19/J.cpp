#include <iostream>
#include <cmath>
#include <ctgmath>
#include <math.h>

using namespace std;

int main() {
	int t; cin >> t; string s; int val;
	int steps; 
	while (t--) {
		cin >> steps;
		long double curx = 0; long double cury = 0; long double cura = 0;
		while (steps--) {
			cin >> s; cin >> val;
			if (s == "fd") {
				curx += val*cos(cura*atan(1.0)*4/180);
				cury += val*sin(cura*atan(1.0)*4/180);
			} else if (s == "bk") {
				curx -= val*cos(cura*atan(1.0)*4/180);
				cury -= val*sin(cura*atan(1.0)*4/180);
			} else if (s == "lt") {
				cura += val;
				while (cura >= 360) cura -= 360;
				while (cura < 0) cura += 360;

			} else {
				cura -= val;
				while (cura >= 360) cura -= 360;
				while (cura < 0) cura += 360;
			}
			//cout << curx << " " << cury << " " << cura << endl;
		}
		long double out = sqrt(curx*curx + cury*cury);
		out = round(out);
		int out_int = out + 1e-4;
		cout << out_int << endl;
	}
	return 0;
}