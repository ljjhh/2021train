#include<string>
#include<iostream>

using namespace std;


int main()
{
	int m,result=1, a,p;
	cin>>a>>p>>m;
	while (p>0)
	{
		if(p&1)//如果二进制位是1 
			result=(result*a)%m;
		a=(a*a)%m;
		p>>=1;//p右移到下一位
	}
	cout<<result<<endl;
}
