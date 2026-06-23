#include<stdio.h>

void DisplaySchedule(char ch)
{
    if(ch == 'A')
    {
        printf("Your exam is at 7am");
    }
    else if(ch == 'B')
    {
        printf("Your exam is at 8:30am");
    }
    else if(ch == 'C')
    {
        printf("Your exam is at 9:20am");
    }
    else if(ch == 'D')
    {
        printf("Your exam is at 10:30am");
    }
    else{
        printf("Invalid Division");
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter your Division :");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}