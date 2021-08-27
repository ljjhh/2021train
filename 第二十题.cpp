#include <iostream>
#include <algorithm>
using namespace std;

int num[100], zuhe[100], n, k;

int  digui(int i,int chengshu) {//这个递归实现所有的组合
	int j;
	chengshu++;
	for (j = i; j < n; j++) {
		zuhe[chengshu] = num[j];
		cout << "[" << zuhe[1];
		for (k = 2; k <= chengshu; k++) cout <<','<< zuhe[k] ;
		cout << ']';//输出当前情况
		digui(++i,chengshu);
	}
	return 0;
}

int main() {
	int i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> num[i];
	}
	digui(0,0);
}
