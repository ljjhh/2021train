#include <iostream>
using namespace std;

int main() {
	int n,num[100],i,j,len=0,i0,j0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (i = 0; i < n;)
	{
		for (j = i+1; j < n; j++)
			if (num[j] <= num[j-1]) break;
		if (len < j - i) { 
			len = j - i;
			i0 = i;
			j0 = j;
		}
		i = j;//i再从j开始将时间复杂度降到o（n）
	}
	for (i = i0; i < j0; i++) {
		cout << num[i] << ' ';
	}
}
