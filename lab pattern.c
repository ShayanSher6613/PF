#include<stdio.h>
main()
{
    int p=0;
    int s=0;
    int n;

    printf("Enter the number of lines: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=p; j++)
        {
            if(j<=s)
            {
                printf(" ");
            }
            else
            {
              printf("*");       
            }
        }
        if(i<=n/2)
        {
            s++;
            p--;
        }
        else
        {
            s--;
            p++;
        }
    }

}