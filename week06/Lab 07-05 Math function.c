//
// Created by Doomf on 8/23/2023.
//
#include "stdio.h"

double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size) {
    double temp = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i] < temp) {
            temp = array[i];
        }
    }
    return temp;
}

double findMax(double array[], int size) {
    double temp = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i] > temp) {
            temp = array[i];
        }
    }
    return temp;
}

double findAvg(double array[], int size) {
    double tempSum = 0;
    for (int i = 0; i < size; i++) {
        tempSum += array[i];
    }
    return tempSum/size;
}

int main() {
    int num;
    scanf("%d", &num);

    double array[num];
    for (int i = 0; i < num; i++) {
        array[i] = getValue();
    }

    double min, max, avg;
    min = findMin(array, num);
    max = findMax(array, num);
    avg = findAvg(array, num);

    printf("%d Values\n"
           "Min: %.3lf\n"
           "Max: %.3lf\n"
           "Avg: %.3lf", num, min, max, avg);
    return 0;
}