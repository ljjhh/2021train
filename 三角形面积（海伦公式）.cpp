#include<string>
#include<iostream>
#include<math.h>

using namespace std;


int main()
{
	int a, b, c, p;
	double s;
	cin>>a>>b>>c;
	if((a<=0||b<=0||c<=0)||(a+b<=c||b+c<=a||a+c<=b))
		printf("输入的数据有误（边长小于0或不能构成三角形）\n");
	else {
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("三角形的面积为：%lf",s);
	}
}
