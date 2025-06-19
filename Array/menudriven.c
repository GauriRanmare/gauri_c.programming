#include <stdio.h>
int main()
{
    // Accept
    // 1. Display 2. Search 3. Insert 4. Delete 5. Count 6. Reverse 7. Exit

    int a[100], i, j, key, pos, cnt, n, ch, temp, flag;

    printf("How many numbers you wants to enter : ");
    scanf("%d", &n);

    printf("Enter Numbers : \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while (1)
    {
        printf("\n\n1. Display\n 2. Search\n 3. Insert\n 4. Delete\n 5. Count\n 6. Reverse\n 7. Exit\nEnter a Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
                printf("%d\n", a[i]);
            break;

        case 2: // Linear Search
            flag = 0;
            printf("Enter a Number for Search : ");
            scanf("%d", &key);
            for (i = 0; i < n; i++)
            {
                if (key == a[i])
                {
                    flag = 1;
                    break; // for loop
                }
            }
            if (flag)
                printf("%d is Found !!", key);
            else
                printf("%d is Not Found !!", key);
            break; // Switch

        case 3:
            printf("Enter position :\n");
            scanf("%d", &pos);
            printf("Enter key");
            scanf("%d", &key);
            for (i = n; i >= pos; i--)

                a[i] = a[i - 1];
            a[pos - 1] = key;
            n++;

            printf("after Position change");
            for (i = 0; i < n; i++)
                printf("%d\n", a[i]);
            break;
        case 4:
            printf("Enter a number for delete : ");
            scanf("%d", &key);
            for (i = 0; i < n; i++)
            {
                if (a[i] == key)
                {
                    for (j = i; j < n - 1; j++)
                        a[j] = a[j + 1];
                    n--;
                    break;
                }
            }
            for (i = 0; i < n; i++)
                printf("%d\n", a[i]);
            break;
        case 5:
        cnt=0;
            printf("Enter number for occurance:");
            scanf("%d", &key);
            for (i = 0; i < n; i++)
            {
                if (key == a[i])
                    cnt++;
            }
            if (cnt == 0)
                printf("Not found");
            else
                printf("Count is %d", cnt);
            break;

        case 6:

            for (i = 0; i < n / 2; i++)
            {
                int temp = a[i];
                a[i] = a[n - 1 - i];
                a[n - 1 - i] = temp;
            }
            printf("After reverse array:\n");
            for (i = 0; i < n; i++)
                printf("%d\n", a[i]);
            break;

        case 7:
            printf("Exit");
            break;
        default:
            printf("Invalid Choice !!");
            break;
        }
    }
}