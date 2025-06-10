#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the characters:");
    scanf("%c",&ch);
    switch (ch)      
    {
    case 'a':
    case 'e':   
    case 'i':
    case 'o':   
    case 'u':
    case 'A':
    case 'E':   
    case 'I':
    case 'O':   
    case 'U':
       printf("vowel");
       break;
        

         

    default:printf(" NOT INVALID CHARACTER");
    
    }

}