//
// Created by ZoOL on 2022/4/24.
//

#ifndef MY_LIB_WRAPPER_H
#define MY_LIB_WRAPPER_H

double getAvgHeight(double latitude, double longitude, float precision);

struct Person {
    int id;
    char name[32];
    int age;
} Person;

int growUp(struct Person *person);

#endif //MY_LIB_WRAPPER_H
