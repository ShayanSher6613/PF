#include<stdio.h>
int prime(int n);
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);

  prime(n);
}
int prime(int n)
{
    int loop;
    int prime=1;

    for(loop=2; loop<n; loop++)
    {
        if(n%2==0)
        {
            prime=0;
        }

        else if(prime==0)
        {
            printf("%d is prime number");
        }
        else
        {
            printf("%d is not prime");
        }
    }
}