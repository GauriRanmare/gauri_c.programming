#include<stdio.h>
int main()
{
    int a[100],i,j,k,n,temp;
    printf("How many number you want to enter");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
printf("After reverse array");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}