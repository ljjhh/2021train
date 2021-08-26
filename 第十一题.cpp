#include<iostream>
#include<string>

using namespace std;

int main() {
	int i,j,k, n, heigh[100],temp,s=0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> heigh[i];
	}
	for (i = 0; i < n; i++) {//比较每一个高度的最大面积，动态规划出最大值输出
		for (k = i; k >= 0; k--)
		{
			if (heigh[k] < heigh[i]) {
				break;
			}
		}
		for (j = i; j < n; j++)
		{
			if (heigh[j] < heigh[i]) {
				break;
			}
		}
		temp = heigh[i] * (j - k - 1);
		if (s < temp) s = temp;
	}
	cout << s;
}

