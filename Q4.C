//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    float radius;
    scanf("%f", &radius);
    float area = 3.14 * radius * radius;
    float circumference = 2 * 3.14 * radius;
   printf("area=%.2f\n circumference=%.2f\n", area, circumference);
    return 0;
}