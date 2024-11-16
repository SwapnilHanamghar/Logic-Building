
#include<stdio.h>

int main()
{
    int iValue = 0;

    int iDigit = 0;

    while(iNo > 0)  // > used
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
    return 0;
}