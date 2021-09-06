#include <math.h>

#define Nbuf 50

char * convertToTitle(int columnNumber){
    char buf[Nbuf+1] = {0}, *result = NULL;
    int N = Nbuf-1;//buf最后一位是'\0'
    int temp = columnNumber-1;//columNumber从0开始计数
    while(temp >= 26){
        buf[N] = temp%26 + 'A';
        N--;
        temp = floor(temp/26) - 1;
    }
    buf[N] = 'A'+temp;
    result = (char *)malloc(Nbuf-N+1);
    memcpy(result,&(buf[N]),Nbuf-N+1);
    return result;
}
