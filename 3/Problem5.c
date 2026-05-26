#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char ch)
{
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch =='E' || ch =='i' || ch == 'I' || ch =='o' || ch =='O' || ch == 'u' || ch == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("It is not a Vowel");
    }

    return 0;
}