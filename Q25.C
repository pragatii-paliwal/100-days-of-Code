//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
int a, b, result;
char op;
scanf("%d %d %c", &a, &b, &op);
switch (op) {
case '+':
result = a + b;
break;

case '-':
result = a - b;
break;

case '*':
result = a * b;
break;

case '/':
result = a / b;
 break;

case '%':
result = a % b;
break;

default:
printf("Invalid operator");
}
printf("%d", result);
return 0;
}