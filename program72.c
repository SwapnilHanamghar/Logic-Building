// Problems on N numbers ie Array Summation

#include<stdio.h>

void Display(int ptr[])     // * removed and [] used      
{
    printf("Values of the Array are : \n");
    //Array is internally consider as a pointer.
    printf("%d\n",ptr[0]);  // *(ptr + 0)

    printf("%d\n",ptr[1]);  //*(ptr + 1)

    printf("%d\n",ptr[2]);  //*(ptr + 2)

    printf("%d\n",ptr[3]);  //*(ptr + 3)
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

    Display(Arr);   

    return 0;
}