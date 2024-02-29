#include<stdio.h>
int main()
{
    int i, j,sum=0,max=0,index=0;
    int r[3][3]={5,1,3,6,1,1,4,9,1};
    printf("Maximum number 1 of rows\n");
    for(i=0;i<3;i++)
    {
         sum=0;
        for(j=0;j<3;j++)
        {
            if(r[i][j]==1)
            {

                sum=r[i][j]+sum;
            }
            if(sum>max)
            {
                max=sum;
                index=i;

            }


        }

    }
    printf("%d is the index which are numbers of 1s are %d ",index,max);

    return 0;
}
