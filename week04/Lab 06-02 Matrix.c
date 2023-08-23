//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"

int mat() {
    double mat1[3][3];
    double mat2[3][3];
    double mat3[3][3];

    // assign value to mat1
    for (int i = 0 ; i < 3; i++) {
        scanf("%lf %lf %lf", &mat1[i][0], &mat1[i][1], &mat1[i][2]);
    }

    // assign value to mat2
    for (int i = 0 ; i < 3; i++) {
        scanf("%lf %lf %lf", &mat2[i][0], &mat2[i][1], &mat2[i][2]);
    }

    // here comes the hard part AxB
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                mat3[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("A x B\n");

    for (int rows = 0; rows < 3; rows++) {
        for (int cols = 0; cols < 3; cols++) {
            printf("%.2f ", mat3[rows][cols]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    mat();
    return 0;
}