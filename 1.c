#include <stdio.h>
#include <math.h>

int main() {
    int a, c, b;

    printf("Введіть ціле число a: ");
    scanf("%d", &a);

    printf("Введіть ціле число c: ");
    scanf("%d", &c);

    if (c < 5) {
        b = a*a - 4*c/a;
    } else if (c >= 5 && c < 10) {
        b = sqrt(a*c - 8*a);
    } else {
        b = c*c - 2*a;
    }

    printf("b = %d\n", b);

    return 0;
}
