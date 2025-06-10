#include <stdio.h>
int main()
{
    int i, fact = 1, n;
    printf("Enter a Number:");
    scanf("%d",&n);
    i = 2;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
        printf("Factorial is %d",fact);
        return 0;
    
}
//int fact=1;
//for(int i=5,i>=1;fact*i,i--)
