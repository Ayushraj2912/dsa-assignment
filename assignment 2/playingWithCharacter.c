#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c", &ch);
    scanf("\n");

    scanf("%[^\n]%*c", s);
    scanf("\n");

    scanf("%[^\n]%*c", sen);
    scanf("\n");

    printf("%c\n%s\n%s", ch, s, sen);
    return 0;
}