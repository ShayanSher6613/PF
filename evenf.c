#include<stdio.h>
int even_odd(int);
int main()
{
    int n1;
    printf("Enter a number: ");
    scanf("%d",&n1);
    
    even_odd(n1);
}
even_odd(int n1)
{
    if( n1 % 2 == 0 )
    {
        printf("%d is even number",n1);
    }
    else
    {
        printf("%d it is odd number",n1);
    }
}