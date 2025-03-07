// date 09.11.24 'N' numbers problems ie Array pointer

#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) % 2 == 1)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter Number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountOdd(ptr, iLength);
    printf("Odd numbers count in Array is : %d",iRet);

    free(ptr);

    return 0;
}

