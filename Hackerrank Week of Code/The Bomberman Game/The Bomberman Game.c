#include <stdio.h>
#include <stdlib.h>

int main()
{   int row,column,time,i,j,watch;
    scanf("%d\n%d\n%d\n",&row,&column,&time);
     int array[row][column],array2[row][column];

    //scan
   for(i=0;i<row;i++)
    {
        scanf("\n");
        for(j=0;j<column;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

if(time==1)
{
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
}

watch=1;



while(watch<=time)
{

//ass arr2=arr1
//all 0
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            array2[i][j]=array[i][j];
            array[i][j]=0;
        }
    }

watch++;

if(time==watch)
{
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d",array[i][j]);
        }
         printf("\n");
    }
}




    //watch blast
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(array2[i][j]==0)
            {
                 array[i][j]=1;

                 if(i+1<row && i+1>=0)
                 {
                     array[i+1][j]=1;
                 }

                 if(i-1<row && i-1>=0)
                 {
                     array[i-1][j]=1;
                 }
                 if(j+1<column && j+1>=0)
                 {
                     array[i][j+1]=1;
                 }
                 if(j-1<column && j-1>=0)
                 {
                     array[i][j-1]=1;
                 }

            }

        }
    }
watch++;

if(time==watch)
{
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d",array[i][j]);
        }
         printf("\n");
    }
}
}
 return 0;
}
