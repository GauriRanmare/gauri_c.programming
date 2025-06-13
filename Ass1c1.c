#include<stdio.h>
int main()
{
    float r,area,circumference;

    printf("Enter a radius of a circle");
    scanf("%f",&r);

    area=3.14*(r*r);
    circumference=2*3.14*r;
    printf("\nArea of a circle:%f\n",area);
    printf("\ncircumference of circle:%f.2",circumference);
    return 0;
}