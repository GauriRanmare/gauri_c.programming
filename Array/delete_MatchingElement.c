#include <stdio.h>
int main()
{
    int a[100], i, j, n, key;

    printf("Enter a N:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter a Number for delete:");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
            i--;
        }
    }
    printf("After Deletion of number:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}