#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter 2 Numbers");
    scanf("%d%d",&a,&b);
    printf("Max is %.6f",fmax(a,b));
    return 0;
}