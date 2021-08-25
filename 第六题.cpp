#include<string>
#include<iostream>

using namespace std;

int main()
{
	int j, k, i, people[10000], n, limt, isone, shipnum;
	cout << "请输入人的数量：" << endl;
	cin >> n;
	for (i = 1; i <= n; i++)//输入加上插入排序
	{
		cin >> people[0];
		for (k = 1; k < i; k++) {
			if (people[0] < people[k]) break;
		}
		for (j = i - 1; j >= k; j--)
			people[j + 1] = people[j];
		people[k] = people[0];
	}
	cout << "请输入上限" << endl;
	cin >> limt;
	for (i = 1, isone = 0, shipnum = 0; i <= n; i++)
	{
		if (!isone && people[i] + people[i + 1] <= limt) {
			cout << '(' << people[i] << ',' << people[i + 1] << ") ";
			i++;
			shipnum++;
		}//当不满足这个情况的时候就不需要再载两人，直接用isone来节省运算
		else {
			cout << '(' << people[i] << ") ";
			isone = 1;
			shipnum++;
		}
	}
	cout << endl;
	cout << "有" << shipnum << "条船载" << endl;
}
