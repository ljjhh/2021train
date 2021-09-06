int lengthOfLastWord(char * s){
    int len;
    char *tmp = NULL;

    tmp = strtok(s, " ");
    while (tmp) {
        len = strlen(tmp);
        tmp = strtok(NULL, " ");
    }

    return len;
}
