#include<stdio.h>
void factorial(int num);
int main()
{
  int num;

  printf("Enter the number to find the factorial: \n");
  scanf("%d",&num);

  factorial(num);
}

void factorial(int num)
{
    if (num==0)
    {
        printf("The factorial of the 0 is 1");
    }
    else 
    {
        int count, factorial=1;
        for(count=1; count<=num; count++)
        {
            factorial = count * factorial;
        }
        printf("The factorial fo the %d is %d",num,factorial);
    }
}

