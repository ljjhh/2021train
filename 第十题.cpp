#include<iostream>
#include<string>

using namespace std;

int digui(int n,int lack,int left, string s);

int n0;

int main() {
    string s;
    cin >> n0;
    printf("[");
    digui(n0, 0,0, s);
    printf("]");
}

int digui(int n,int lack,int left,string s) {
    if (n != 0 && lack == 0) {//当只能添加左括号时
        s += '(';
        digui(n, ++lack,++left, s);
    }
    else if (n0 == left) {//当只能添加右括号时
         s += ')';
        --n;
        lack--;
        if(lack!=0) digui(n, lack, left, s);
    }
    else {//当既能添加左括号又能添加右括号时
        s += '(';
        lack++;
        left++;
        digui(n, lack,left, s);
        s.pop_back();
        lack--;
        left--;
        s += ')';
        --n;
        lack--;//j将变量还原
        digui(n, lack, left, s);
    }
    if (n == 0) {
        cout <<"\""<< s << "\""<<' ';
        return 0;
    }
}
