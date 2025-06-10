#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a Number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d\n", i);
    }
    return 0;
}
//perfect no. progarm
/*sum of factores==given no
do not used 10(n)
change loop condition and used this (i>=%2)
sum logic*/

