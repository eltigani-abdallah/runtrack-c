#include <stdio.h>
int my_strlen(char* str) {
    int strlen = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        strlen++;
    }
    return strlen;
}

int main() {
    int length = my_strlen("Hello!");

    printf("length = %d\n", length);


    return 0;
}