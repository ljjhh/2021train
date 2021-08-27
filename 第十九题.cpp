#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a,int b) {
	return a < b;
}

int main() {
	int n,num[100],i,j,temp,len=0,j0,i0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num,num+n,compare);//先将数组进行排序
	for (i = 0; i < n;)
	{
		for (j = i + 1; j < n; j++) {
			if (num[j] - 1 != num[j - 1]) break;
		}//动态规划出最长序列
		if (len < j - i) {
			len = j - i;
			j0 = j;
			i0 = i;
		}
		i = j;//减少时间复杂度
	}
	printf("最长有%d个数连续", len);
	for (i = i0; i < j0; i++) cout << num[i] << ' ';
}
