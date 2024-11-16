// date 09.11.24 'N' numbers problems ie Array pointer

#include<stdio.h>
#include<stdlib.h>

void ReverseDisplay(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Reverse elements in Array are : \n");

    for (iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
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
    
    ReverseDisplay(ptr, iLength);


    free(ptr);

    return 0;
}
