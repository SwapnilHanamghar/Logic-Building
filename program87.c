// date 09.11.24 'N' numbers problems ie Array pointer

#include<stdio.h>
#include<stdlib.h>

void AdditionEvenOdd(int Arr[], int iSize)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else if((Arr[iCnt]) %2 == 1)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    printf("Addition of Even Elements : %d\n",iSumEven);
    printf("Addition of Odd Elements : %d\n",iSumOdd);

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

    AdditionEvenOdd(ptr, iLength);

    free(ptr);

    return 0;
}

