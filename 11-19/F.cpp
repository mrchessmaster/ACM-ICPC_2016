//#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int x[100005], y[100005], z[100005];
int n,count,k;

int main() {
	while (1) {
		scanf("%d",&n);
		scanf("%d",&k);
		if (n==0 && k==0) break;
		for (int i=0; i<n; i++) {
			scanf("%d",&x[i]);
			scanf("%d",&y[i]);
			scanf("%d",&z[i]);
		}
		count = 0;
		for (int i=0; i<n; i++) {
			for (int j=i+1; j<n; j++) {
				if ((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]) + (z[i]-z[j])*(z[i]-z[j]) < k*k) count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}