


#include<stdio.h>

void DisplayTimetable (int iStd)
{
    switch (iStd)
    {
        case 8:
            printf("Your Exam is at 9.30 AM\n");
            break;

        case 9:
            printf("Your Exam is at 10.30 AM\n"); 
            break;   
    
        case 10:
            printf("Your Exam is at 11.30 AM\n");
            break;
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

// Added break keyword in cases.