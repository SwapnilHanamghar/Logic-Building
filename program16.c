/*
START
    accept the percentage from user 
    if percentage less than 40 display FAIL
    if percentage greater or equal to 40 display PASS
STOP 
*/


#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if (fPercentage >100.0f)
    {
        printf("Invalid percentage, Please enter in the range 0 to 100\n ");
        
    }
    if (fPercentage >=40.00f)
    {
        printf("Your Pass\n");
    }
    else 
    {
        printf("Your Fail");
    }

}
int main()
{
    float fValue = 0.0f;

    printf("please enter the percentage : \n");
    scanf("%f",&fValue);

    DisplayResult(fValue);

    return 0;
}