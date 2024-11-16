//take number from user nd check whether the number is divisible 3 nd 5 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
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
    bool bFlag = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bFlag = CheckDivisible(iValue);

    if(bFlag == true)
    {
        printf("%d is divisible by 5 and 3",iValue);
    }
    else
    {
        printf("%d is not divisible by 5 or 3",iValue);
    }

    return 0;
}