#include<stdio.h>

float sum(float number_1, float number_2);
float subtract(float number_1, float number_2);
float product(float number_1, float number_2);
float division(float number_1, float number_2);
float main()
{
    int number_1, number_2, choice;

    printf("Enter the first number: ");
    scanf("%d",&number_1);
    printf("Enter the second number: ");
    scanf("%d",&number_2);
    printf("Enter the your preferred function:\n1. Addition \n2. Subtraction\n3. Product\n4.Division\n ");
    scanf("%d",&choice);
    
    if(choice==1)
    {
        sum(number_1, number_2);
    }
    if(choice==2)
    {
        subtract(number_1, number_2);
    }
    if(choice==3)
    {
        product(number_1, number_2);
    }
    if(choice==4)
    {
        division(number_1, number_2);
    }

    return 0;
}
    float sum(float number_1, float number_2)
    {
        float res1;
        res1 =  number_1 + number_2;
        printf("The sum of %d and %d is %d",number_1,number_2,res1);

    }
    float subtract(float number_1, float number_2)
    { 
        float res2;
        res2 = number_1/number_2;
        printf("The Difference of %f and %f is %f",number_1, number_2,res2);
        return res2;
        
    }
    float product(float number_1, float number_2)
    {
        float res3;
        res3 = number_1 * number_2;
        printf("The Product of %f and %f is %f",number_1, number_2 ,res3);
        
    }
    float division(float number_1, float number_2)
    {
        float res4;
        res4 = number_1 / number_2;
        printf("The Division of %f and %f is %f",number_1, number_2, res4);
        
    }

