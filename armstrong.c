//How to Digit Count
#include<stdio.h>
int main()
{
    int n,cnt=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(n>0)//
    {
        cnt++;
        n=n/10;//only want division
    }
    printf("Count of Digit %d",cnt);
    return 0;
}