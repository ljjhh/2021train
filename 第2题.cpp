class Solution {
public:
    bool isValid(string s) {
        #include<stack>
        stack<char> opt;
        opt.push('#');
        int h, i=0, j=0, k=0;
        for(h=0;h<s.length();h++){
            if(s[h]=='('||s[h]=='['||s[h]=='{')
            opt.push(s[h]);
            else if(s[h]==')'&&opt.top()=='(')
            opt.pop();
            else if(s[h]==']'&&opt.top()=='[')
            opt.pop();
            else if(s[h]=='}'&&opt.top()=='{')
            opt.pop();
            else return 0;
        }
        if(opt.top()=='#')
        return 1;
        else return 0;
    }
};
