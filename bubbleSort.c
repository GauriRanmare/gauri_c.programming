#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    printf("How many number you want to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (a[j] >a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted Array\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
