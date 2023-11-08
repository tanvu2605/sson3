#include <stdio.h>

int main() {
    int number1, number2, number3, max, min;

    printf("Nhap 3 so nguyen: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    max = min = number1;

    max = (number2 > max) ? number2 : max;
    max = (number3 > max) ? number3 : max;

    min = (number2 < min) ? number2 : min;
    min = (number3 < min) ? number3 : min;

    printf("So nguyen lon nhat: %d\n", max);
    printf("So nguyen nho nhat: %d\n", min);
}

