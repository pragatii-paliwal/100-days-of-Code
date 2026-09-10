//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, first, last, power = 1, temp, result;

    scanf("%d", &n);

    temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;
    last = n % 10;

    result = n - first * power - last;
    result = result + last * power + first;

    printf("%d", result);

    return 0;
}