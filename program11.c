


#include<stdio.h>


int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter Radius of Circle : \n");
    scanf("%f\n",fRadius);

    fArea = 3.14f * fRadius * fRadius;

    printf("Area of Circle : %f",fArea);

    return 0;
}