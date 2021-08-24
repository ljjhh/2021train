#include<iostream>
#include<math.h>

int main()
{
	bool num[10000]={0};
	int i,j,top;
	printf("请输入一个正整数:\n");
	scanf("%d",&top);
	while(top<=0)
	{
		printf("输入有误！请重新输入：\n");
		scanf("%d",&top);
	}
	for(i=2;i<=(int)sqrt(top);)
	{
		for(j=i+1;j<=top;j++)
		{
			if(num[j]==0&&j%i==0)
			{
				num[j]=1;
			}
		}
		do
		{
			i++;
		}while(num[i]==1);
	}
	printf("小于等于%d的素数有：",top);
	for(i=2;i<=top;i++)
	{
		if(num[i]==0)
		{
			printf(" %d",i);
		}
	}
	printf("\n");
	return 0;
}
