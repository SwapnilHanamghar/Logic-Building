// Display Digit in reverse order

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    if ( iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        iRev = iRev * 10 + iDigit;      // Logic of Reverse

        iNo = iNo / 10;
    }
    return iRev;
}

#include<stdio.h>

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reverse number is : %d",iRet);

    return 0;

}