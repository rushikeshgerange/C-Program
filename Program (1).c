#include<stdio.h>

int main()
{
    float Radius= 0.0f;
    const float PI = 3.14f;
    float Area=0.0f;

    printf("Enter the size of radius : ");
    scanf("%f", &Radius);

    Area = PI * Radius * Radius;

    printf("Area Of Circle is : %f",Area);



    return 0;
}