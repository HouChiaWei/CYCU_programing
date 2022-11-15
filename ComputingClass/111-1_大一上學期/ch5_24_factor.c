#include<stdio.h>
#include<stdlib.h>

#define x 24

int main()
{   printf("\n------------------------------\n\n");

    int a = 0;
    printf("Please input a integer number :");
    scanf("%d",&a);
    if(a == 0)
    {
        printf("Please input correct number !");
    }else if(x%a == 0)
    {
        printf("%d is 24's factor.",a);
    }else if (x%a != 0)
    {
        printf("%d is not 24's factor.",a);
    }

    printf("\n\n------------------------------\n\n");
    system("pause");    
    return 0;
}