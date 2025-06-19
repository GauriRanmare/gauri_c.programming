
#include<stdio.h>
int main()
{
    int n,i,a[100],key,cnt=0;
    printf("Enter a number");
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
    if(cnt==0)
    printf("Not found");
    else
    printf("Count is %d",cnt);
    return 0;

}