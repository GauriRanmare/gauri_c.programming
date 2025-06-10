#include<stdio.h>
int main()
{
    int a[100],i,n,key,cnt=0;
    printf("How many number you want to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter number for occurance:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        cnt++;
    }
    if (cnt==0)
    printf("Not Found");
    else
    printf("count is %d",cnt);
return 0;
    }