#include<stdio.h>

int main()
{
    float a,b;
    char c;

    while(1)
    {
        printf("請輸入算式\n");
        scanf("%f %c %f",&a,&c,&b);

        if(c == 43)      // +
            printf("Sum=%.2f\n",a+b);
        else if(c == 45) // -
            printf("Sum=%.2f\n",a-b);
        else if(c == 42) // *
            printf("Sum=%.2f\n",a*b);
        else if(c == 47) // /
            printf("Sum=%.2f\n",a/b);
    }

    return 0;
}
