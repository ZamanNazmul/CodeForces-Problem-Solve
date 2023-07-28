// write a function that computes the time one must leave in order to reach a certain destination by a designated time. You need to deal only with arrivals occurring later on the same day as the departure. Function inputs include the arrival time as an integers on a 24-hour clock (8.30 P.M = 2030). the distance to the destination in kilometers, and the speed you plan to average in km/hr. The function result should be the required departure time (rounded the nearest minute) as an integer on a 24- hour clock .

// The function takes three inputs: arrival_time (an integer on a 24-hour clock), distance (in kilometers), and speed (in km/hr). It computes the time needed to travel the given distance at the given speed, rounds it to the nearest minute, and subtracts it from the arrival time to get the required departure time. The function handles cases where the departure time is before 
// midnight or after midnight by adding or subtracting 2400.
// In this example, the function is called with an arrival time of 8:30 PM, a distance of 150 km, 
// and a speed of 60 km/hr. The output is the required departure time (rounded to the nearest minute)
//  to arrive at the destination by the designated arrival time:
//  Note that the departure time is represented as an integer on a 24-hour clock (e.g., 1740 means 5:40 PM).


#include <stdio.h>
#include <math.h>

int calculateDepartureTime(int arrivalTime, int distance, int speed) {
    int arrivalHour = arrivalTime / 100;
    int arrivalMinute = arrivalTime % 100;

    int travelTime = round((double) distance / speed * 60);

    int departureMinute = arrivalMinute - travelTime % 60;
    
    int departureHour = arrivalHour - travelTime / 60;

    if (departureMinute < 0) {
        departureHour--;
        departureMinute += 60;
    }
    if (departureHour < 0) {
        departureHour += 24;
    }

    return departureHour * 100 + departureMinute;
}

int main() {
    int arrivalTime = 2030;  // 8:30 PM
    int distance = 100;  // km
    int speed = 60;  // km/h
    int departureTime = calculateDepartureTime(arrivalTime, distance, speed);

    printf("To arrive at destination by %d, you should depart at %d.\n", arrivalTime, departureTime);

    return 0;
}
