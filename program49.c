// summation of factors

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for (iCnt = 1; iCnt <= iNo/2; iCnt++)  
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;  // Summation of factors logic
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Summation of factors : %d",iRet);

    return 0;
}