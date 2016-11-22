//#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <cstdio>

using namespace std;

typedef pair<int,int> pii;
int t; int temp1, temp2;
int maxArea, minArea, curArea;


int main() {
	while (1) {
		scanf("%d",&t);
		if (t==0) break;
		vector<pii> v; 
		for (int i=0; i<t; i++) {
			scanf("%d",&temp1);
			scanf("%d",&temp2);
			v.push_back(make_pair(temp1,temp2));
		}
		maxArea = 0;
		minArea = 8e8;
		for (int i=0; i<t; i++) {
			for (int j=i+1; j<t; j++) {
				for (int k=j+1; k<t; k++) {
					curArea = abs((v[i].first - v[k].first)*(v[j].second - v[i].second) - (v[i].first - v[j].first)*(v[k].second - v[i].second));
					if (curArea > maxArea) maxArea = curArea;
					if (curArea < minArea) minArea = curArea;
				}
			}
		}
		printf("%.1f",minArea/2.0); 
		printf(" ");
		printf("%.1f\n",maxArea/2.0);
	}
	return 0;
}