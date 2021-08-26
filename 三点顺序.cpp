#include<iostream>
#include<string>

using namespace std;

int main() {
	int judge, i, x[3], y[3];
	for (i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}
	judge = (x[1] - x[0]) * (y[2] - y[1]) + (x[2] - x[1]) * (y[1] - y[0]);
	if (judge > 0)
		cout << "顺时针" << endl;
	else if (judge < 0)
		cout << "逆时针" << endl;
	else
		cout << "共线" << endl;
}

