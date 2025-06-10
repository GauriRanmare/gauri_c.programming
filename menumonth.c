#include <stdio.h>
int main()
{
    int m;
    char n;
    printf("enter month number");
    scanf("%d", &m);

    switch (m)
    {
    case 1:
        printf("Month have 31 days. \n");
        break;
    case 2:
        printf("Month have 28 or 29 days. \n");
        break;
    case 3:
        printf("Month have 31 days. \n");
        break;
    case 4:
        printf("Month have 30 days. \n");
        break;
    case 5:
        printf("Month have 31 days. \n");
        break;
    case 6:
        printf("Month have 30 days. \n");
        break;
    case 7:
        printf("Month have 31 days. \n");
        break;
    case 8:
        printf("Month have 31 days. \n");
        break;
    case 9:
        printf("Month have 30 days. \n");
        break;
    case 10:
        printf("Month have 31 days. \n");
        break;
    case 11:
        printf("Month have 30 days. \n");
        break;
    case 12:
        printf("Month have 31 days. \n");
        break;
    
    default:printf("Invalid month");
    break;

    }
}