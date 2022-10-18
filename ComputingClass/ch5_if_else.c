#include<stdio.h>
#include<stdlib.h>

int main()
{   printf("\n------------------------------\n\n");
    
    int a;
    printf("Please input a integer number : \nA =  ");
    scanf("%d",&a);

    if(a > 0)
    {
        printf("A is a positive integer (+).");
    }else if(a == 0)
    {
        printf("A is zero (0).");
    }else
    {
        printf("A is a negative integer (-).");
    }

    printf("\n\n------------------------------\n\n");
    system("pause");    
    return 0;
}