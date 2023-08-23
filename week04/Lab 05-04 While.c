#include <stdio.h>

int tn() {
    int count;
    scanf("%d", &count);
    int i = 1;
    while (i <= count) {
        printf("%d ", i);
        i++;
    }
    return 0;
}
int main() {
    tn();
    return 0;
}
