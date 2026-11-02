#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF8");
    int a, b, c;

    printf("Введите 3 числа через пробел\n");

    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Ошибка ввода");
        return 1;
    }

    if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0) printf("Портал открыт\n");

    if (a % 3 != 0 || b % 3 != 0 || c % 3 != 0) printf("Портал не открыт\n");

    return 0;
}
