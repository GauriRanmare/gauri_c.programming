#include<stdio.h>
int main()
{
    int flag=0,n,i;
    printf("Enter a Nnumber:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Prime Number:");
    else
    printf("Not Prime Number:");
    return 0;
}