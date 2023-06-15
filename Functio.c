#include<stdio.h>
calsum(x,y,z);
main()
{
    int a,b,c;

    printf("Enter there number: ");
    scanf("%d %d %d",&a,&b,&c);

    int sum = calsum(a,b,c);

    printf("\nSum = %d",sum);
}
calsum( x, y, z)
int x,y,z;
{
    int d;

    d = x + y + z;

    return d;
}