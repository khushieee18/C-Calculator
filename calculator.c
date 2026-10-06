#include<stdio.h>

int main() {
    float num1, num2;
    char op;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Result:\n");

    if(op == '+') {
        printf("%.2f\n", num1 + num2);
    }
    else if(op == '-') {
        printf("%.2f\n", num1 - num2);
    } 
    else if(op == '*') {
        printf("%.2f\n", num1 * num2);
    } 
    else if(op == '/') {
        printf("%.2f\n", num1 / num2);
    } 
    else {
        printf("Invalid operator.\n");
    }

    return 0;
}