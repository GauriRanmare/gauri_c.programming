#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    printf("Enter a Alphabet:");
    scanf("%c",&ch);
     ch=tolower(ch);

     switch (ch)
     {
      case 'a':
      case 'i':
      case 'o':
      case 'e':
      case 'u':
          printf("vowel");
          break;

      default:
      printf("NOT Valid");
     }
    }       