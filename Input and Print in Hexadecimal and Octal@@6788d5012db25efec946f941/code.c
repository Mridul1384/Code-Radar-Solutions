#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("Hexadecimal: %X\n", num); // %X prints uppercase hexadecimal
    printf("Octal: %o\n", num);       // %o prints octal representation
    return 0;
}