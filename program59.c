// Summation of digits 

int SumDigit(int iNo)
{
    int iDigit = 0, iSum = 0;

    if ( iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;           //summation logic
        iNo = iNo / 10;
    }
    return iSum;
}

#include<stdio.h>

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Summation of Digits are : %d",iRet);

    return 0;

}