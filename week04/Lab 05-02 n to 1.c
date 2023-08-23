#include <stdio.h>

int n_to() {
    int count;
    scanf("%d", &count);
    int i = count;
    do {
        printf("%d ", i);
        i--;
    } while (i > 0);

    return 0;
}
int main() {
    n_to();
    return 0;
}
