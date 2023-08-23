//
// Created by Doomf on 8/9/2023.
//
#include "stdio.h"
#include "string.h"

int encr() {
    char txt[200];
    char cipher[] = {'A', 'B', 'X', 'Y', 'P', 'Q', 'R', 'M', 'N', 'C', 'E', 'D',
                  'K', 'L', 'J', 'O', 'S', 'H', 'T', 'U', 'F', 'V', 'Z', 'G',
                  'W', 'I'};
    int walker;
    int change;
    scanf("%[^\n]s", txt);

    for (int i = 0; i < strlen(txt); i++) {
        if (txt[i] != ' ') {
            for (int k = 0; k < strlen(cipher); k++) {
                if (cipher[k] == txt[i] || cipher[k] == (char) txt[i]+'A'-'a') {
                    walker = k;
                    break;
                }
            }

            if (txt[i] == cipher[walker]) {
                change = 0;
            } else change = 32;

            if (walker - 5 < 0) {
                walker = 26 + (walker-5);
            } else walker -= 5;

            printf("%c", cipher[walker]+change);
        } else printf(" ");
    }
    return 0;
}
