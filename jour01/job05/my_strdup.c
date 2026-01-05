



char *my_strdup(char *src) {

    int i = 0;
    int j = 0;
    while (src[i] != '\0') {
        i++;
    }
    i+=1;

    char *p1 = malloc(sizeof(char)*i);

    while (src[j] != '\0') {
        p1[j] = src[j];
        j++;
    }
    p1[j]='\0';

    return p1;

}

