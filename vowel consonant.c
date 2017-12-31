#include<stdio.h>

int main()
{
char ch;
printf("Enter the letter:");
scanf("%c",&ch);
switch(ch)
{
	case 'A' : 
	case 'a' : printf("%c It's a vowel\n",ch);
    break;
	case 'E' : 
	case 'e' : printf("%c It's a vowel\n",ch);
    break;
	case 'I' :
	case 'i' : printf("%c It's a vowel\n",ch);
    break;
    case 'O' : 
    case 'o' : printf("%c It's a vowel\n",ch);
    break;
    case 'U' : 
    case 'u' : printf("%c It's a vowel\n",ch);
    break;
    default : printf("%cIts a consonent",ch);
    break;
   }
    return 0;
    }