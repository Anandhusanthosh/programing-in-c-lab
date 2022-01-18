#include<stdio.h>

int getSum();

int main() {
    printf("sum = %d", getSum());
}

int getSum() {
    int num1, num2;
    printf("Enter the two numbers : ");
    scanf("%d%d", &num1, &num2);
    return (num1 + num2);
}
