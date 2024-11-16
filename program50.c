// Perfect number or not (summation of factor is same number is perfect number)

#include<stdio.h>
#include<stdbool.h>

bool CheckFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for (iCnt = 1; iCnt <= iNo/2; iCnt++)  
    {
        if ((iNo % iCnt) == 0 )
        {
            iSum = iSum + iCnt;  
        }
    }
    
    if (iSum == iNo )
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckFactors(iValue);
    if (bRet == true)
    {
        printf("%d is Perfect number",iValue);
    }
    else
    {
        printf("%d is not a Perfect number",iValue);
    }

    return 0;
}