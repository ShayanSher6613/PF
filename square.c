#include<stdio.h>
square(int);
int main()
{
  int num,p;
  printf("Enter the number: ");
  scanf("%d", &p);
  square(p);
}

square(p)
{
    int S;

    S = p*p;

    printf("The square of %d is %d",p,S);
}

