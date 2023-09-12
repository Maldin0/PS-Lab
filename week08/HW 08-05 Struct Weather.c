//
// Created by Doomf on 9/9/2023.
//
#include "stdio.h"
#include "string.h"

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather * weather) {
    if (strcmp(weather->outlook, "overcast") == 0) printf("yes\n");
    else if (strcmp(weather->outlook, "rain") == 0) {
        if (weather->wind == 'F') printf("yes\n");
        else printf("no\n");
    } else {
        if (weather->humidity <= 77.5) printf("yes\n");
        else printf("no\n");
    }
}

int main() {
    int num;
    scanf("%d", &num);

    struct Weather weather[num];

    for (int i = 0; i < num; i++) {
        scanf("%s %d %d %c", weather[i].outlook, &weather[i].temperature, &weather[i].humidity, &weather[i].wind);
        playing_decision(&weather[i]);
    }
}