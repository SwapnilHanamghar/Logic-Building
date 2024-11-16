// Problems on N numbers using Dynamic memory

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the Number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength *sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    free(ptr);

    return 0;
}