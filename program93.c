// date 09.11.24 'N' numbers problems ie Array pointer

#include<stdio.h>
#include<stdlib.h>

float AdditionAvg(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return ((float)iSum/(float)iSize);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;
    float fRet = 0.0f;

    printf("Enter Number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    fRet = AdditionAvg(ptr, iLength);

    printf("Avearage is : %f",fRet);


    free(ptr);

    return 0;
}
