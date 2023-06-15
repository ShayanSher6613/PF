#include<stdio.h>
factorial(int num);
main()
{
  int num;

  printf("Enter the number to find the factorial: \n");
  scanf("%d",&num);

  factorial(num);
}

factorial(int num)
{
    int count, factorial_1 = 1;
    for(count=1; count<=num; count++)
    {
        factorial_1  = factorial_1 * num;
        if ( factorial_1 == 0)
        {
            printf("The factctorial of the 0 is 1",factorial_1);
        }
        else
        {
          printf("The factorial of %d is %d",num,factorial);
        }
    }
}

