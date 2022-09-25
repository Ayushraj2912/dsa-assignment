#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int n, temp, sum = 0;
    scanf("%d", &n);

    while (n)
    {
        temp = n % 10;
        n = n / 10;
        sum += temp;
    }

    printf("%d", sum);

    return 0;
}