// Summation of even digits 

int SumEvenDigit(int iNo)
{
    int iDigit = 0, iSum = 0;

    if ( iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)         // Even digit Summation
        {
            iSum = iSum + iDigit;           
        }
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

    iRet = SumEvenDigit(iValue);

    printf("Summation of Even Digits are : %d",iRet);

    return 0;

}