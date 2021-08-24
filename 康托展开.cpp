#include<string>
#include<iostream>

using namespace std;

int fac[10]={1,1,2,6,24,120,720,5040,40320,362880};

int main()
{
	int j,i,n,weixu,result=0;//i和j用于找出当前字符是第几大，weixu只最后的位序，result是最后的结果
	string pailie;
	cin>>pailie;
	n=pailie.length();
	for(i=0;i<n;i++)
	{
		weixu=0;
		for(j=i+1;j<n;j++)
		{
			if(pailie[j]<pailie[i])//如果比pailie【i】要小就加一
				weixu++;
			else if(pailie[j]==pailie[i]){
				printf("你输入的排列有误出现了两个%c\n",pailie[i]);
				exit(0);
			}
		}
		result+=weixu*fac[n-i-1];
	}
	printf("这个排列是第%d个排列！",result+1);//因为存在排列0，故最后的结果要加1
}
