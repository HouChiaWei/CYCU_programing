#include<stdio.h>

int main()
{
    float sum = 0,n,flag=0;
    while(scanf("%f",&n)){
        sum += n;
        flag += 1;
    }
    printf("-----------\ntotal %.f numbers = %.2f\n",flag,sum);

    return 0;   
}