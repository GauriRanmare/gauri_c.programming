#include<stdio.h>
int main()
{
    char ch;
    
    printf("Enter a Anything ");
    scanf("%c",&ch);

   switch (ch)
   {
    case 'A'...'Z': printf("Capital letter");
    break;
    case 'a'...'z':printf("small letter");
    break;

     case '0'...'9':printf("digit letter");
     break;
     default:
      printf("special letter !!");
     break;
   }
}