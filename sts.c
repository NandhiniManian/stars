#include<stdio.h>
void main()
{
    int i,j;
    printf("to print star:\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
printf("\t*");

        }
        printf("\n");
    }
}
