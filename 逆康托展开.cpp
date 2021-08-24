#include<string>
#include<iostream>

using namespace std;

int fac[10] = { 1,1,2,6,24,120,720,5040,40320,362880 };

int main()
{
	int n, weixu, i, j,k;//n表示排列的长度，位序表示每次的被除数，i,j,k用来寻找没有被用到的字符.
	bool isocc[10] = { 0 };//如果已经被占用值为1
	string result;//最后的结果
	printf("请输入排列的长度和位序：\n");
	cin >> n >> weixu;
	weixu--;//首先要减去1，因为位序包含0
	while (n > 0) {
		i = weixu / fac[n - 1] + 1;//先求出商
		for (j = 0, k = 0 ; k < i;) {
			j++;
			if (isocc[j] == 0) k++;
		}//在找出第i个字符
		isocc[j] = 1;
		result += (j + 48);//j+48的ascll码就是这个数字的字符
		weixu = weixu % fac[n - 1];
		n--;
	}
	cout << result;
}
