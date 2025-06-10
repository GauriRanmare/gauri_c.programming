#include <stdio.h>
int main()
{
    int a, b, ch;
    printf("Enter number:");
    scanf("%d%d", &a, &b);
    printf("\n1.addition \n2.subtraction \n3.multiplication \n4.division \n Enter choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("addition is :%d", a + b);
        break;
    case 2:
        printf("subtraction is :%d", a - b);
        break;
    case 3:
        printf("multiplication is :%d", a * b);
        break;
    case 4:
        printf("division is :%d", a / b);
        break;
    default:
        printf("Invalid choice");
    }
}