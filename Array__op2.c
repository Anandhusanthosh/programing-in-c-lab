#include<stdio.h>

void displaySum() {
    int arr[10],index, size,sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: ");
    for(index = 0; index < size;index++) {
        scanf("%d",&arr[index]);
    }

    printf("The array elements are : ");
    for(index = 0; index < size;index++) {
        sum += arr[index];
    }

    printf("Sum = %d",sum);

}

void main() {
    displaySum();
}
