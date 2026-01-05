#include "my_putchar.c"

void my_putstr(char *str) {
    for (int i =0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

int main() {
    my_putstr("Hello World!\n");
}