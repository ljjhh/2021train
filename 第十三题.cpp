#include<iostream>
#include<string>

using namespace std;

int main() {
    int j, nums[100],n,i,temp;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> nums[i];
    }
    i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }//找到不是递增的第一个元素
    if (i >= 0) {
        j = n - 1;
        while (j >= 0 && nums[i] >= nums[j]) {
            j--;
        }//在找到递增序列中比这个数大的数
        swap(nums[i], nums[j]);//交换这两个数
    }
    for (j = i+1; j < ( n + i + 1 ) / 2; j++) {//最后翻转递增部分就行了
        temp = nums[j];
        nums[j] = nums[n - j - 1];
        nums[n - j - 1] = temp;
    }
    for (i = 0; i < n; i++) {
        cout << nums[i]<<' ';
    }
}
