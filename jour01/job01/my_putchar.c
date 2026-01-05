#include <unistd.h>

void my_putchar(char c) {
    write(1, &c, 1);
}
/*
int main() {
    my_putchar('H');
    my_putchar('e');
    my_putchar('l');
    my_putchar('l');
    my_putchar('o');
    my_putchar(' ');
    my_putchar('W');
    my_putchar('o');
    my_putchar('r');
    my_putchar('l');
    my_putchar('d');

}
*/