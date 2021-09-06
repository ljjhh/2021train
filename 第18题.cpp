int trailingZeroes(int n){
    if (n < 25) return n / 5;
        
    int result = 0;
    long long temp = 1;
    for (int i = 2; i <= n; i++) {
        temp *= i;
        while (temp % 10 == 0) {
            result++;
            temp /= 10;
        }
        if (temp > 100000) temp = temp % 100000;
    }
    return result;
}
