#include<stdio.h>
#include<math.h>
int main()
{
     int num1,num2,num3;

     printf("Enter 3 Numbers");
     scanf("%d%d%d",&num1,&num2,&num3);
    printf("Max is %.3f",fmax(num1,fmax(num2,num3)));
    return 0;
}