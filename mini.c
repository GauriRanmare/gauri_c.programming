#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 Number");
    scanf("%d%d",&a,&b);
    (a<b)?printf("Mini is %d",a):printf("Mini is %d",b);
    return 0;
}