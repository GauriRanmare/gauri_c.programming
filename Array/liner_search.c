#include<stdio.h>
int main()
{
    int a[100],i,n,key,flag=1;
    
     printf("How many number you want to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter the number for search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=0;
           break;
        }
    }
    if(flag==1)
    printf("not found");
    else
    printf("found");
    return 0;
}