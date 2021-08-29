# include <iostream>
using namespace std;

int main()           
{
	int n, i, num[10000], j,temp;
	cin >> n;
	j = n;
	for (i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (j = n; j > 1;j--) {
		for (i = 0; i < j - 1;i++) {
			if (num[i + 1] < num[i]) {
				temp = num[i + 1];
				num[i + 1] = num[i];
				num[i] = temp;
			}
		}
	}
	cout << num[0];
	for (i = 1; i < n; i++)
		cout <<','<< num[i];
}
