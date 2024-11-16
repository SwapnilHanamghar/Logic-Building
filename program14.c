// information about the marks nd calculate the percentage

/*
    start 
        accept total marks 
        accept obtained marks 
        calculte percentage as (obtained / total) *100
        Display percentage
    stop
*/

#include<stdio.h>

float CalculatePercentage(int iObtained, int iTotal)
{
    float fPercentage = 0.0f;

    fPercentage = ((float)iObtained / (float)iTotal) * 100;

    return fPercentage;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fResult = 0.0f;

    printf("Please enter the Obtained marks in exam : \n");
    scanf("%d",&iValue1);

    printf("Please enter total marks : \n");
    scanf("%d",&iValue2);

    fResult = CalculatePercentage(iValue1, iValue2);

    printf("Your percentage is : %f\n",fResult);
    
    return 0;

}

// line 18 contains typecasting example ie thodya vela sathi int la float mdhe convert karane.