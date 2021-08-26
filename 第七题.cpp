#include<iostream>
#include<vector>

using namespace std;

int maxArea(int height[], int n);

int main() {
    int height[100],n,i;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> height[i];
    }
    cout<<maxArea(height,n);
}

int maxArea(int height[],int n) {
    int  i, j, v, temp;
    for (i = 0, v = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++) {
            temp = (height[i] < height[j] ? height[i] : height[j]) * (j - i);
            if (temp > v) v = temp;
        }
    }
    return v;
}
