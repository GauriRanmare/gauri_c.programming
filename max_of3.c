#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(c>a&&c>b)
    printf("Greeater Number is %d",c);
    else if(a>b&&a>=c)
    printf("Greater Number is %d",a);
    else
    printf("Greater Number is %d",b);
    return 0;
}