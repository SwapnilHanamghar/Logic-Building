//count of Digits

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    
    if(iNo < 0)   
    {
        iNo = -iNo;
    }

    while(iNo > 0) 
    {
        iDigit = iNo % 10;
        iCount++;           //++ operator used for counting 
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("%d",iRet);

    return 0;
}