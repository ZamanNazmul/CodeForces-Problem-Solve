// Implement the following decision table using a multiple-alternative if statement .Assume that the wind speed is given as a function parameter. 
// Wind speed (mph) :                                 category
// below 25                                                   not a string wind 
// 25-38                                                      string wind
// 39-54                                                      gale
// 55-72                                                      whole  gale 
// above 72                                                   hurricane 

#include <stdio.h>
void category_of_wind_speed(int wind_speed);
int main() {
    int wind_speed;
    
    printf("Enter the wind speed in mph: ");
    scanf("%d", &wind_speed);  
    category_of_wind_speed(wind_speed);   
    return 0;
}
void category_of_wind_speed(int wind_speed) {
    if (wind_speed < 25)
            printf("Wind speed is not a strong wind.\n");
    else if (wind_speed >= 25 && wind_speed <= 38) 
            printf("Wind speed is a strong wind.\n");
    else if (wind_speed >= 39 && wind_speed <= 54)
            printf("Wind speed is a gale.\n");
    else if (wind_speed >= 55 && wind_speed <= 72) 
            printf("Wind speed is a whole gale.\n");
     else 
            printf("Wind speed is a hurricane.\n");
}
