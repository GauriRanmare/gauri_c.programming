#include<stdio.h>
int main()
{
    int num1,num2,num3;
    
    printf("Enter 3 numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    if(num1>num2)
         num2=num1;
    if(num3>num2)
        num2=num3;
    
    printf("Max is %d",num2);
    return 0;
}