#include<string>
#include<iostream>

using namespace std;


int main()
{
	string input;
	int nums[100],i=0,k,temp,isfushu=0,j=0;
	cin>>input;
	while (input[i] != ']')//输入数据
	{
		temp = 0;
		isfushu = 0;
		while ((input[i] <= '9' && input[i] >= '0')||input[i]=='-')
		{
			if ((input[i] <= '9' && input[i] >= '0')&&isfushu==0)
			{
				temp = temp * 10 + (input[i] - '0');
				i++;

			}
			else if ((input[i] <= '9' && input[i] >= '0') && isfushu == 1)
			{
				temp = temp * 10 - (input[i] - '0');
				i++;
			}
			else if (input[i] == '-') {//监测到负号，进行记录
				isfushu = 1;
				i++;
			}
			if(!((input[i] <= '9' && input[i] >= '0')||input[i]=='-'))
			{
				nums[j]=temp;
				j++;
			}
		}
		while (!((input[i] <= '9' && input[i] >= '0') || input[i] == '-') && input[i] != ']')
			i++;
	}
	for(i=0;i<j-1;i++)
	{
		if(nums[i]==nums[i+1])
		{
			for(k=i;k<j-1;k++)
				nums[k]=nums[k+1];//删除多余的元素
			j--;
			i--;
		}
	}
	cout<<j<<','<<"nums=[";
	cout<<nums[0];
	for(i=1;i<j;i++)
	{
		cout<<','<<nums[i];//按题目要求的格式输出
	}
	cout<<']'<<endl;
	return 0;
}
