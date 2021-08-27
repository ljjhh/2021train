#include <iostream>
using namespace std;

int main() {
	int n,num[100],i,j,earn=0,temp;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++) {//动态规划最大的收益
			if (num[j] <= num[i]) continue;
			else {
				temp = num[j] - num[i];
				temp > earn ? earn = temp : 0;
			}
		}
	}
	cout << earn;
}
