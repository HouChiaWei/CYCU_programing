#include<stdio.h>
int main()
{
    int flag = 1;
    for(int i=1;i*i<500;i+=4)
        printf("%d. %d * %d = %d\n",flag++,i,i,i*i);
    return 0;   
}