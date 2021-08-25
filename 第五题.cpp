#include<string>
#include<iostream>

using namespace std;

int text(bool arr[], int n);

int main()
{
	bool arr[10][100];//用二维数组存放数据
	int i = 0, zunum, j, leng[10], fixtime = 0;//zunum用于保存组数，leng[10]用于保存每组数据的长度
	cin >> zunum;//fixtime用于保存修改次数
	for (i = 0; i < zunum; i++)
	{
		cin >> leng[i];
		for (j = 0; j < leng[i]; j++)
		{
			cin >> arr[i][j];
		}
	}//按题目要求输入
	for (i = 0; i < zunum; i++)
	{
		for (j = 1, fixtime = 0; j < leng[i]-1; j++)
		{
			if (arr[i][j] == 0&&arr[i][j-1]==1&&arr[i][j+1]==1)//如果修改这个0前后都是1，就修改它
			{
				arr[i][j] = 1;
				fixtime++;
			}
		}
		cout << text(arr[i],leng[i]) - fixtime << endl;
		for (j = 0; j < leng[i]; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
int text(bool arr[], int n)//返回数组最大连续1的长度
{
	int j, k, maxlen = 0;
	for (j = 0; j < n; j++)
	{
		if (arr[j] == 1) {
			for (k = j; k < n;) {
				if (arr[k] == 0) break;
				else k++;
			}
			k--;
			if (maxlen < k - j + 1) maxlen = k - j + 1;
			j = k;
		}
	}
	return maxlen;
}

