#include <stdio.h>
#include <limits.h>
int main()
{
    int max, second, a[100], i, n;
    printf("How many number you want to enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
    second = INT_MIN;
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
        second=max;
            max = a[i];
    }
    else if (a[i] > second && a[i] !=max)
        second = a[i];
}
printf("2nd Max is: %d",second);
return 0;
}