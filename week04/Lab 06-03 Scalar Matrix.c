//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"

int scalar() {
    double mat[3][3];

    for (int i = 0 ; i < 3; i++) {
        scanf("%lf %lf %lf", &mat[i][0], &mat[i][1], &mat[i][2]);
    }

    if (mat[0][1] == 0 && mat[0][2] == 0 && mat[1][0] == 0
        && mat[1][2] == 0 && mat[2][0] == 0 && mat[2][1] == 0
        && mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]) {
        printf("This is a scalar matrix");
    } else printf("This is not a scalar matrix");
    return 0;
}
int main() {
    scalar();
    return 0;
}