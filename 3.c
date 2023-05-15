#include <stdio.h>

int main() {
    int episode_number;

    printf("Введіть номер епізоду: ");
    scanf("%d", &episode_number);

    switch (episode_number) {
        case 1:
            printf("Епізод 1: Ви вже чули?\n");
            printf("Дата прем'єри: 16 травня 2018 року\n");
            break;
        case 2:
            printf("Епізод 2: Що б ти зробив?\n");
            printf("Дата прем'єри: 23 травня 2018 року\n");
            break;
        case 3:
            printf("Епізод 3: Тако Чарлі\n");
            printf("Дата прем'єри: 30 травня 2018 року\n");
            break;
        case 4:
            printf("Епізод 4: Є лише один переможець\n");
            printf("Дата прем'єри: 6 червня 2018 року\n");
            break;
        case 5:
            printf("Епізод 5: Любов сліпа\n");
            printf("Дата прем'єри: 13 червня 2018 року\n");
            break;
        case 6:
            printf("Епізод 6: Той, хто злиться, програє\n");
            printf("Дата прем'єри: 20 червня 2018 року\n");
            break;
        case 7:
            printf("Епізод 7: Ліки від усього\n");
            printf("Дата прем'єри: 27 червня 2018 року\n");
            break;
        case 8:
            printf("Епізод 8: Хто шукає, той знаходить\n");
            printf("Дата прем'єри: 4 липня 2018 року\n");
            break;
        default:
            printf("Невірний номер епізоду\n");
    }

    return 0;
}
