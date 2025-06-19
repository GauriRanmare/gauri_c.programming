#include<stdio.h>
int main()
{
     int a[100],i,key,n,pos;
    printf("How many number you want to enter");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter Position");
    scanf("%d",&pos);
    printf("Enter Key");
    scanf("%d",&key);

    for(i=n;i>=pos;i--)
    a[i]=a[i-1];
    a[pos-1]=key;
    n++;

    printf("After Position change");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;

}