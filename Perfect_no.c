#include <stdio.h>
int main()
{
  int n, sum = 0, i;
  printf("Enter a Number:");
  scanf("%d", &n);
  for (i = 1; i <= n / 2; i++)
  {
    if (n % i == 0)
      sum += i;
  }
  if(sum==n)
    printf(" Perfect Number:");
    else
     printf("Not Perfect Number:");
  return 0;
}

