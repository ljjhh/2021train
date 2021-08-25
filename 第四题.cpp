#include<string>
#include<iostream>

using namespace std;


int main()
{
	int n, temp=0;
	printf("请输入一个整数：\n");
	cin>>n;
	while(n!=0)
	{
		temp=temp*10+n%10;
		n/=10;
	}
	cout<<temp;
}
