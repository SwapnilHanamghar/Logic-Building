#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("%d. Jay Ganesh...\n",iCnt);
        iCnt++;
    } 
}
int main()
{
    int iFrequency = 0;

    printf("Please Enter your Frequency : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    
    return 0;
}