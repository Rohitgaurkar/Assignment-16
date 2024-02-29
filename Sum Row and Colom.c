#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    printf("total sum of rows:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
         printf("%d ",sum);
         sum=0;


    }
    printf("\n\n");
    printf("total sum of columns:");

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[j][i];
        }
         printf("%d ",sum);
         sum=0;


    }



}
