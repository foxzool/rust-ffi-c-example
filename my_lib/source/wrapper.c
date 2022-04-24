//
// Created by ZoOL on 2022/4/24.
//

#include "wrapper.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


double getAvgHeight(double latitude, double longitude, float precision) {

    srand((unsigned) time(NULL) * 10);
    double height = rand() % 10000;
    printf("From C: lat: %f, lon: %f, pre: %f got height: %f\n", latitude, longitude, precision, height);

    return height;
}






int growUp(struct Person *person) {
    person->age++;
    printf("From C: Person id %d name %s grow up age to %d \n", person->id, person->name, person->age);
    return person->age;
}
