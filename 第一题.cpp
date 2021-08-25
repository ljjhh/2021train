#include<string>
#include<iostream>

using namespace std;


int main()
{
	int i = 0, j = 0, k, temp, nums[100], target;
	string input;
	printf("请按nums=[a,b.....],target=c的格式输入\n");
	cin >> input;
	while (input[i] != ']')
	{
		temp = 0;
		while (input[i] <= '9' && input[i] >= '0')
		{
			temp = temp * 10 + (input[i] - '0');
			i++;
			if (!(input[i] <= '9' && input[i] >= '0'))
			{
				nums[j] = temp;
				j++;
			}
		}
		while (!(input[i] <= '9' && input[i] >= '0') && input[i] != ']')
			i++;
	}
	while (!(input[i] <= '9' && input[i] >= '0'))
		i++;
	temp = 0;
	while (input[i] <= '9' && input[i] >= '0')
	{
		temp = temp * 10 + (input[i] - '0');
		i++;
		if(!(input[i] <= '9' && input[i] >= '0'))
		target = temp;
	}
	for (i = 0; i < j; i++)
	{
		if (nums[i] < target)
		{
			for (k = 0; k < j; k++)
			{
				if (nums[k] + nums[i] == target && k != i) {
					cout << '[' << i+1 << ',' << k+1 << ']' << endl;
					exit(0);
				}
			}
		}
	}
}
