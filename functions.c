#include<stdio.h>
int sum(int n1, int n2);
int main()
{
    int number1,number2;
    printf("Enter the first number: ");
    scanf("%d %d", &number1, &number2);

    sum(number1, number2);

    //printf("The sum is %d ", sum(number1, number2));
}
int sum(int n1, int n2)
{
  int res = n1+n2;
  
  printf("The naswer is %d", res);
}