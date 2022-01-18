#include<stdio.h>

int cel_to_far(int temp_in_cel) {
    return (temp_in_cel * 1.8) + 32;
}
int far_to_cel(int temp_in_far) {
    return (temp_in_far - 32) / 1.8;
}

void main() {
    int choice, cel, far;
    printf("Select an option to continue : \n1 - Convert temperature from celcius to farenheit.\n2 - Convert temperaturen from farenheit to celcius.\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        // call cel_to_far()
        printf("Enter the temperature in celcius : ");
        scanf("%d",&cel);
        printf("%d celcius is %d farenheit",cel,cel_to_far(cel));
        break;
    case 2: 
        // call far_to_cel()
        printf("Enter the temperature in farenheit : ");
        scanf("%d",&far);
        printf("%d farenheit is %d celcius : ",far,far_to_cel(far));
        break;
    default: printf("Invalid input");
    }
}
