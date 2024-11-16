// date 09.11.24 'N' numbers problems ie Array pointer

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;
//1 - Accept the number of elements from user
    printf("Enter Number of elements : \n");
    scanf("%d",&iLength);
//2 - Allocate that memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));
//3 - Accept the values and store into the dnamic memory
    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
//4 - Perform the operations (Logic)
    //Logic of Function

//5 - Deallocate Memory 
    free(ptr);

    return 0;
}

/*

steps 
1 - Accept the number of elements from user
2 - Allocate that memory dynamically
3 - Accept the values and store into the dnamic memory
4 - Perform the operations (Logic)
5 - Deallocate Memory 

*/