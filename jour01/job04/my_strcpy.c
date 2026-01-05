//#include <stdio.h>

char *my_strcpy(char *dest, char *src) {
    int i=0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}
/*
int  main() {
    char source[] = "hello";
    char result[20];

    printf("source says: %s \nresult before strcpy: %s\n", source, result);
    my_strcpy(result, source);
    printf("source (after) says: %s \nresult after strcpy: %s\n", source, result);

    return 0;
}*/