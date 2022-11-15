#include<stdio.h>

int main()
{
    float n,i,j=1,A=0;
    printf("-----計算e常數15位值-----\n請輸入一個數字 : ");
    scanf("%f",&n);
    if(n==0 || n==1)
        printf("%.15f",2.0);
    else{
        A += 1;
        for(i=1;i<=n;i++)
        {
            j *= i;
            A += (1/j);
        }
        printf("%.15f",A);
    }

    return 0;
}