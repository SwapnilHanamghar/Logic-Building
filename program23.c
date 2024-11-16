// taking standard and display the time table for exam of 
//std 7  - 9.30 AM
//std 8 - 10.30 AM
//std 9 - 11.30 AM

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

        default :
            printf("Sorry we dont have information about your standard");
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

// Added Default for invalid values.