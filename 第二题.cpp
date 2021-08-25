#include<string>
#include<iostream>

using namespace std;


int main()
{
	int i = 0, j = 0, k, h, temp, nums[100],isfushu=0,isfrist=0;//isfushu用来判断是否要读入负数
	string input;
	cout << "请按nums=[a,b,c...]的格式输入" << endl;
	cin >> input;
	while (input[i] != ']')
	{
		temp = 0;
		isfushu = 0;
		while ((input[i] <= '9' && input[i] >= '0')||input[i]=='-')//迭代输入数据
		{
			if ((input[i] <= '9' && input[i] >= '0')&&isfushu==0)
			{
				temp = temp * 10 + (input[i] - '0');
				i++;
				nums[j] = temp;
				j++;
			}
			else if ((input[i] <= '9' && input[i] >= '0') && isfushu == 1)
			{
				temp = temp * 10 - (input[i] - '0');
				i++;
				nums[j] = temp;
				j++;
			}
			else if (input[i] == '-') {
				isfushu = 1;
				i++;
			}
		}
		while (!((input[i] <= '9' && input[i] >= '0') || input[i] == '-') && input[i] != ']')
			i++;
	}
	cout << '[';
	for (i = 0; i < j - 2; i++)
	{
		for (k = i + 1; k < j - 1; k++)
		{
			for (h = k + 1; h < j; h++) {
				if (nums[i] + nums[k] + nums[h] == 0 && !isfrist) {//isfrist用来控制输出格式
					cout << '[' << nums[i] << ',' << nums[k] << ',' << nums[h] << ']';
					isfrist = 1;
				}
				else if(nums[i] + nums[k] + nums[h] == 0 && isfrist)
					cout <<','<< '[' << nums[i] << ',' << nums[k] << ',' << nums[h] << ']';//三个循环可以完成组合
			}
		}
	}
	cout << ']'<<endl;
}
