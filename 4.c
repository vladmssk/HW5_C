#include <stdio.h>

// Функция для вычисления НОД
int gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    return num1;
}

// Функция для сокращения дроби
void decrease(int *number, int *denominator) {
    int gcd_val = gcd(*number, *denominator); // Вычисление НОД
    *number /= gcd_val; // Сокращение числителя
    *denominator /= gcd_val; // Сокращение знаменателя
    printf("%d %d\n", *number, *denominator); // Вывод сокращенной дроби
}

int main() {
    int number, denominator;
    scanf("%d %d", &number, &denominator); // Ввод числителя и знаменателя дроби
    decrease(&number, &denominator); // Вызов функции для сокращения дроби
    return 0;
}
