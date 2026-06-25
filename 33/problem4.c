#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iLast = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLast = iIndex;
        }

        iIndex++;
        str++;
    }

    return iLast;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    getchar();

    printf("Enter character : ");
    scanf("%c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}