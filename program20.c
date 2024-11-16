


#include<stdio.h>

void DisplayTimetable (int iStd)
{
    if (iStd == 8)
    {
        printf("Your exam is at 9.30 AM\n");
    }

    else if (iStd == 9)
    {
        printf("Your exam is at 10.30 AM\n");
    }

    else if (iStd == 10)
    {
        printf("Your exam is at 11.30 AM\n");
    }
    
    else 
    {
        printf("Sorry we dont have information about your standard");
    }
}

int main()
{
    int iValue = 0;

    printf("Please Enter your Standard\n");
    scanf("%d",&iValue);

    DisplayTimetable(iValue);

    return 0;
}