#include <stdio.h>

int main() {
    int x;
    printf("Введіть ціле число: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("Число нуль\n");
    } else if (x % 2 == 0 && x < 0) {
        printf("Парне від'ємне число\n");
    } else if (x % 2 == 0 && x > 0) {
        printf("Парне додатне число\n");
    } else if (x % 2 != 0 && x < 0) {
        printf("Непарне від'ємне число\n");
    } else {
        printf("Непарне додатне число\n");
    }
    return 0;
}
