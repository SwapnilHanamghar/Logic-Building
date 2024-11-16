// Problems on N numbers ie Array Summation

#include<stdio.h>

void Display(int *ptr)      //pointer use to catch address of Arr
{
    int iCnt = 0;
    printf("Values of the Array are : \n");

    for(iCnt = 0; iCnt <=3; iCnt++)     //loop is used for ptr 
    {
        printf("%d\n",*ptr);
        ptr++;
    }
}

int main ()
{
    int Arr[4];
    int iCnt = 0;

    printf("Please enter the values : \n");
        
    for(iCnt = 0; iCnt <= 3; iCnt++)             
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr);   //Address of first elements of Array ie Arr

    return 0;
}