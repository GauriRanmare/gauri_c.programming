#include<stdio.h>
int main()
{
    int a[100],i,j,k,n;
     printf("How many number you want to enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
     

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                a[k]=a[k+1];
                n--;
                j--;
            }
        }
    }
     printf("unique array\n");
   for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
