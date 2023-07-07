#include<stdio.h>

int main()
{
    char ch;
    ch = getchar();

    if(ch >= '0' && ch <= '9')
        printf("Input is a Numeral");
    else
    {
        if(ch >= 'A' && ch <= 'Z')
            printf("Input is an Uppercase Letter");
        else
        {
            if(ch >= 'a' && ch <= 'z')
            {
                printf("Input is a Lowercase Letter\n");
                switch(ch)
                {
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                        printf("Vowels");
                        break;
                    default:
                        printf("Consonants");
                }
            }
            else
                printf("Special Character");
        }
    }

    return 0;
}
