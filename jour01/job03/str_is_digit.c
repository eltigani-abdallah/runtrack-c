#include "char_is_digit.c"
#include <stdio.h>

int str_is_digit(char str[]) {

    for (int i = 0; str[i] != '\0'; i++) {
        if (char_is_digit(str[i]) ==  1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("result of 'hello' is: %d\n", str_is_digit("hello"));
    printf("result of 'h3110' is: %d\n", str_is_digit("h3110"));

    return 0;
}