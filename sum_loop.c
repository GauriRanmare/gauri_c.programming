/*find sum of 1 to N*/
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum+=i;
    printf("Sum of 1 to %d is %d",n,sum);
    return 0;

} 
/*n=10
i=1 2 3
sum+=i
2<=10 yes   sum=1+2
3<=10 yes    sum=3+3*/
