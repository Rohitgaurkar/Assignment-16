#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int a[3][3]={1,2,10,4,30,6,20,8,9};

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if( j==(2-i))
                sum=sum+a[i][j];
        }

    }
     printf("***************\n");
    printf("\n total sum of left diagonal matrix %d\n",sum);

}

