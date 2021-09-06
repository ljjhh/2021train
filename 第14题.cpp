int compareVersion(char * version1, char * version2){
    int len1 = strlen(version1);
    int len2 = strlen(version2);
    int i = 0;
    int j = 0;
    while (i < len1 || j < len2) {
        int num1 = 0;
        int num2 = 0;
        while (i < len1 && version1[i] != '.') {
            num1 = num1 * 10 + (version1[i++] - '0');
        }
        while (j < len2 && version2[j] != '.') {
            num2 = num2 * 10 + (version2[j++] - '0');
        }
        if (num1 < num2) {
            return -1;
        } else if (num1 > num2) {
            return 1;
        }
        i++;
        j++;
    }
    return 0;
}
