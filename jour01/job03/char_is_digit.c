//#include <stdio.h>

int char_is_digit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}
/*
int main() {
    printf("result of 0 is: %d\n", char_is_digit('5'));
    printf("result of A is: %d\n", char_is_digit('A'));
    return 0;
}
*/