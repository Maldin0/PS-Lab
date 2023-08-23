#include <stdio.h>

int to_n() {
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
    to_n();
    return 0;
}
