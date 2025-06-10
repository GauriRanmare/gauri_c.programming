#include <stdio.h>
#include <string.h>
int main()
{
    char n[100];

    printf("Enter a Number:");
    scanf("%s", n);

    printf("Reverse Number:%s", strrev(n));

    return 0;
}
