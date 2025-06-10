#include<stdio.h>
int main()
{
    int num1,num2,num3;
    
    printf("Enter 3 Number");
    scanf("%d%d%d",&num1,&num2,&num3);
    
       num2=(num1>num2)?num1:num2;
       num2=(num3>num2)?num3:num2;

    printf("max is %d",num2);
    return 0;   
}