// In shopping for a new house, you must consider several factors. 
// In this problem the initial cost of the house, the estimated annual fuel costs,
// and the annual tax rate are available, Write a program that will determine the total cost of a house
// after a five year period and run the program for each of the following sets of data. 

// initial house cost :    Annual fuel cost :    Tax Rate :
// 67,000                  2,300                  0.025
// 62,000                  2,500                  0.025
// 75,000                  1,850                  0.020


// To calculate the house cost, add the initial cost to the fuel cost for five years, then add the taxes for five years. Taxes for one year are computed by multi-plying the tax rate by the initial cost.
// Write and call a function that displays instructions  to the program user.


#include <stdio.h>

void display_instructions() {
    printf("This program calculates the total cost of a house after a five year period.\n");
    printf("You will be prompted to enter the initial cost of the house, the estimated annual fuel costs,\n");
    printf("and the annual tax rate.\n");
}

int main() {
    float initial_cost, fuel_cost, tax_rate, total_cost;


    display_instructions();

    // Data for the first house
    initial_cost = 67000;
    fuel_cost = 2300;
    tax_rate = 0.025;

    total_cost = initial_cost + (fuel_cost * 5) + (initial_cost * tax_rate * 5);
    printf("Total cost for house 1: %.2f\n", total_cost);

    // Data for the second house
    initial_cost = 62000;
    fuel_cost = 2500;
    tax_rate = 0.025;

    total_cost = initial_cost + (fuel_cost * 5) + (initial_cost * tax_rate * 5);
    printf("Total cost for house 2: %.2f\n", total_cost);

    // Data for the third house
    initial_cost = 75000;
    fuel_cost = 1850;
    tax_rate = 0.020;

    total_cost = initial_cost + (fuel_cost * 5) + (initial_cost * tax_rate * 5);
    printf("Total cost for house 3: %.2f\n", total_cost);

    return 0;
}
