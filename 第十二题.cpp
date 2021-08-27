#include<iostream>
#include<string>

using namespace std;

int can[100];
int num[100];
int n;
int digui(int k,int i,int total);
int target;

int main() {
	int i;
	cin >> n;//n表示要输入的数据个数
	for (i = 0; i < n; i++) {
		cin >> can[i];
	}
	cin >> target;
	cout << '[';
	digui(0,0,0);
	cout << ']';
}

int digui(int k,int i,int total)//用递归来实现各种不同的组合再输出正确的组合
{
	int j;
	k++;
	if (total > target||i>n)//已经不满足情况了，直接返回上一层
		return 0;
	else if (total == target) {//刚好相等，于是便输出结果
		printf(" [");
		cout << num[1];
		for (j = 2; j < k; j++) {
			cout <<','<< num[j];
		}
		printf("] ");
		return 0;
	}
	for (j = i; j < n; j++)//每次循环要j=i开始，这样就能做到组合
	{
		total += can[j];
		num[k] = can[j];
		digui(k,++i,total);
		total -= can[j];
	}
}
