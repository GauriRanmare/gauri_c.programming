#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 2 number");
    scanf("%d%d",&a,&b);
    printf("Before swapping\n A=%d\n b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping");
    printf("\n A=%d",a);
    printf("\n B=%d",b);
    return 0;

}

