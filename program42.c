#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}