#include<iostream>
using namespace std;

int main() {
	int num[1000], i, n, j, k,min=0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> num[i];
	}
	for (i = 1; i <= n; i++) {
		for (j = i,min=num[i],k=i; j <= n; j++) {
			if (num[j] < min) {
				k = j;
				min = num[j];
			}
		}
		if (i != k) {
			min=num[i];
			num[i] = num[k];
			num[k] = min;
		}
	}
	for (i = 1; i <= n; i++) {
		cout <<  num[i] << ' ' ;
	}
}
