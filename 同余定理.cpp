#include<string>
#include<iostream>

using namespace std;


int main()
{
	int ans=0,mod,i,n;//ans是最终的结果，mod是要余的数，n表示高精度整数长度
	string a;//aj就是高精度整数
	printf("请输入一个不限精度的整数和一个整数：\n");
	cin>>a>>mod;
	n=a.length();
	for(i=0;i<n;i++)
	{
		ans=(ans*10+a[i]-'0')%mod;
	}
	cout<<a<<" % "<<mod<<" = "<<ans<<endl;
}
