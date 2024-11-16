// Problems on N numbers ie Array

#include<stdio.h>

int main ()
{
    int Arr[4];
    int iCnt = 0;

    printf("Please enter the values : \n");
            //1         2       3
    for(iCnt = 0; iCnt <= 3; iCnt++)            // using loop for scanf 
    {
        scanf("%d",&Arr[iCnt]);//4
    }
    
    printf("Values from the Array are :\n");
            // 1        2       3
    for (iCnt = 0; iCnt <= 3; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);   //4
    }

    return 0;
}