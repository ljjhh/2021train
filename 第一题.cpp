//递归解法
char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize == 1){   //base case
        return strs[0];
    }
    int len = fmin(strlen(strs[strsSize-1]),strlen(strs[strsSize-2])); //长度取两个数组中最小的那个
    char string[len+1];  //相同字符存储数组
    char *result; //递归结果保存变量
    for (int i=0;i<len+1;i++){
        if (strs[strsSize-1][i] == strs[strsSize-2][i]){
            string[i] = strs[strsSize-1][i];
        }
        else{
            string[i]='\0'; //在末尾加上字符串结束字符'\0'
            break;
        }
    }
    if (string == "\0") return ""; //如果无公共前缀，返回空
    strcpy(strs[strsSize-2] ,string);//将相同字符数组复制到比较字符串的前一个
    result = longestCommonPrefix(strs,strsSize-1);
    return result;
}
