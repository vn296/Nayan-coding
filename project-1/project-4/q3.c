#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=5;i>=1;i--)
    {
        for(k=i;k<i;k++)
        {
            printf("  ");
        }
        for(j=i;j<=5;j++)
        {
            printf(" %d ",j);
        }
        printf(" \n");
    }
}