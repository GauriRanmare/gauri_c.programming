#include <stdio.h>
int main()
{
    int n;
    printf("Enter  a number:");
    scanf("%d", &n);
    while (n > 0)
    {
        int rem = n % 10;//reminder
        printf("%d  ", rem);
        n = n / 10;
    }
    return 0;
}

/* n=564
n>0 564>0
rem=n%10;
10%564=56
output=4
*/