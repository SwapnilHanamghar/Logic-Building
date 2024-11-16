// Problems on N numbers ie Array Summation

#include<stdio.h>

int main ()
{
    int Arr[4];
    int iCnt = 0;
    int iSum = 0;

    printf("Please enter the values : \n");
        
    for(iCnt = 0; iCnt <= 3; iCnt++)            // using loop for scanf 
    {
        scanf("%d",&Arr[iCnt]);
    }
        
    for (iCnt = 0; iCnt <= 3; iCnt++)
    {
        iSum = iSum + Arr[iCnt];   
    }

    printf ("Summation : %d\n",iSum);

    return 0;
}