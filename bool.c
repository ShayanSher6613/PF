#include<stdio.h>
#include<stdbool.h>
int main()
{
    int num,res;
    printf("Enter a number: ");
    scanf("%d", &num);
    bool res = isPrime(num);
    {
        if(res==true)
        {
            printf("It is prime number",num);
        }
        else
        {
            printf("It is not prime number",num);
        }
    }
}
bool isPrime(num)
{
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}