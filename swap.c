#include<stdio.h>
int swap(int , int );
int main()
{
    int n1,n2;

    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);

    swap(n1, n2);
}
int swap(int n1,int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("The swapped number is %d and %d",n1,n2);
    
    return temp;

}