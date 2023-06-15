#include<stdio.h>
square(float x);
main()
{
    float a,b;

    printf("Enter an number: ");
    scanf("%f", &a);
    
    b = square(a);
    printf("Square of %f is %f",b);
}
square(float x)
{
    int y;

    y = x*x;

    return y;
}
