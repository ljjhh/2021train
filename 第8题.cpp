#include<iostream>
using namespace std;

int main() {
	int num[1000], i, n, j, k;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> num[i];
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i && num[i]>num[j]; j++);
		num[0] = num[i];
		for (k = i; k > j; k--) num[k]=num[k-1];
		num[j] = num[0];
	}
	for (i = 1; i <= n; i++) {
		cout <<  num[i] << ' ' ;
	}
}
