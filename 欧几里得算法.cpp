#include<stdio.h>

int main()
{
	int a,b,temp;
	printf("请输入两个正整数：\n");
	scanf("%d %d",&a,&b);
	while(a<=0||b<=0)
	{
		printf("输入有误请重新输入！\n");
		scanf("%d %d",&a,&b);
	}
	if(a>b)
	{	
		while(temp!=0)
		{
			temp=a%b;
			a=b;
			b=temp;
		}
		printf("这两个整数的最大公约数为：%d\n",a);
	}
	else
	{
		while(temp!=0)
		{
			temp=b%a;
			b=a;
			a=temp;
		}
		printf("这两个整数最大的公约数为：%d\n",b);
	}
	getchar();
}
