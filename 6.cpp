
// Question no 6 

#include <stdio.h>
int main() {
    int watts;
    int lumens;

    
    printf("Enter wattage of light bulb: ");
    scanf("%d", &watts);        
    switch(watts) {
        case 15:
            lumens = 125;
            break;

        case 25:
            lumens = 215;
            break;

        case 40:
            lumens = 500;
            break;

        case 60:
            lumens = 880;
            break;

        case 75:
            lumens = 1000;
            break;

        case 100:
            lumens = 1675;
            break;

        default:
            lumens = -1; // or whatever default value you want to set
    }
    
    printf("The expected brightness in lumens is: %d\n", lumens);

    return 0;
}
