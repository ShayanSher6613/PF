#include<stdio.h>
sum(int n1, int m2);
diff(int n1, int n2);
mult(int n1, int n2);
int main()
{
    int n1,n2, choice;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    printf("Enter your preferred function:\n1. Addition\n2.Subtraction\n3.Multiplication\n");
    scanf("%d ",&choice);
    if(choice==1)
    {
        sum(n1,n2);
    }
    if(choice==2)
    {
        diff(n1,n2);
    }
    if(choice==3)
    {
        mult(n1,n2);
    }
}
sum(int n1, int n2)
{
    int S;
    S = n1 + n2;
    printf("The sum of the %d and %d is %d",n1,n2,S);
}
diff(int n1, int n2)
{
    int D;
    D = n2 - n1;
    printf("The difference of %d and %d is %d", n1,n2,D);
}
mult(int n1, int n2)
{
    int M;
    M = n1 * n2;
    printf("The product of %d and %d is %d",n1,n2,M);
}