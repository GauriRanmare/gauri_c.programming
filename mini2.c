#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 number");
    scanf("%d%d",&a,&b);
    printf("Mini is %d",(a<b)?a:b);
    return 0;
}