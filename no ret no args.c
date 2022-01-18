#include<stdio.h>

int main()
{
    modify(); // function call
    return 0;
}
void modify() // function definition
{
    int a;
    printf("Enter a value:");
    scanf("%d", &a);
    a = a + 10;
    printf("The modified value is %d", a);
}
