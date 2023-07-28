#include <stdio.h>

int main() {
    int serviceNumber;

    float miles;

    printf("1. first free service\n");

    printf("2. second free service\n");

    printf("Enter the free service number : ");

    scanf("%d", &serviceNumber);

    printf("Enter number of miles : ");

    scanf("%f", &miles);
    
    if (serviceNumber == 1 && miles > 1500 && miles <= 3000) 
    {
        printf("First free service.\n");
    } 
    else if (serviceNumber == 2 && miles > 3000 && miles <= 4500) 
    {
         printf("Second free service.\n");
    } 
    else {
         printf("Vehicle must be serviced.\n");
    }
    
    return 0;
}
