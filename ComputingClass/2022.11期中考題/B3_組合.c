#include<stdio.h>

int main()
{
    long long a,b,result = 1,k = 1;
    printf("請輸入n和m:");
    scanf("%d %d",&a,&b);
    if(a==0 || b ==0)
        printf("Result = %d",1);
    else{
        for(int i=1;i<=a;i++)
            result *= i;
        for(int i=1;i<=b;i++)
            k *= i;
        result /= k;
        k = 1;
        for(int i=1;i<=a-b;i++)
            k *= i;
        result /= k;
        printf("Result = %d",result);
    }
    return 0;
}
