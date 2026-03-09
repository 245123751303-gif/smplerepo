#include <stdio.h>

int main() {
    int a, b;
    char op;
    float result;

    printf("Enter expression (a + b): ");
    scanf("%d %c %d", &a, &op, &b);

    if(op == '+')
        result = a + b;
    else if(op == '-')
        result = a - b;
    else if(op == '*')
        result = a * b;
    else if(op == '/')
        result = (float)a / b;
    else {
        printf("Invalid operator");
        return 0;
    }

    printf("Result = %.2f", result);

    return 0;
}
