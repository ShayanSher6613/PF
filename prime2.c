#include<stdio.h>
prime(int);
int main()
{
    int number;
    printf("Enter the number:\n ");
    scanf("%d",&number);

    prime(number);

}

prime(number)
{
  for(int i=2; i<=number/2; i++)
  {
    if(i%2==0)
    {
        printf("%d is prime number",number);
    }
    else
    {
      printf("%d is not a prime number",number);
    }
  }
   
}