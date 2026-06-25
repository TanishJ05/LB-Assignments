#include<stdio.h>

void strlwx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str +32;
        }
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    strlwx(arr);

    printf("Modified string is %s",arr);

    return 0;
}