#include "stdio.h"

int condition()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
    {
        printf("%d + %d = %d", num1, num2, num1+num2);
    } else
    {
        printf("%d - %d = %d", num1, num2, num1-num2);
    }
    return 0;
}

int main()
{
    condition();
    return 0;
}