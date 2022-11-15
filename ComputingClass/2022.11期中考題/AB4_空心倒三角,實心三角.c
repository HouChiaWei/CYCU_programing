#include<stdio.h>

int main()
{
    int row,i,j,k;
    printf("Please input a number of rows : ");
    scanf("%d",&row);

    for(int i=0;i<row;i++)
    {
        k=0;
        while(k<i) 
            printf(" ",k++);
        
        if(i==0)
            for(j=0;j<row*2-1;j++)
                printf("*");
        else{
            printf("*");
            for(j=1;j<2*(row-i-1);j++)
                printf(" ");
            if (i!=row-1)
                printf("*");
        }
        printf("\n");
    }
    for(i=0;i<=row;i++)
    {
        k=row;
        while(k>i)
            printf(" ",k--);
        for(j=0;j<2*i-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}