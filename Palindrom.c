#include<stdio.h>
int main()
{
    int temp,n,rev=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    temp=n; //Back up
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
    printf("palindrom Number:");
    else
    printf("Not Palindrom Number");
    return 0;
}