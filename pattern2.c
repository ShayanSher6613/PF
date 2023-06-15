#include<stdio.h>
int main()
{
    int row,column;

    for(row=5; row>0; row--)
    {
        //printf("%d",row);
        for(column=5; column>0; column--)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
}
