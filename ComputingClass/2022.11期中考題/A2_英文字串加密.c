#include<stdio.h>

int main()
{
    char password[10];
    printf("輸入字母(大寫小寫視為相同):");
    scanf("%s",password);
    for(int j=0;j<10;j++)
    {
        if(password[j] < 91 && password[j]>64)
            printf("%d ",password[j]-60);
        else if(password[j] < 123 && password[j]>96)
            printf("%d ",password[j]-92);
        else
            printf(" ");
    }
    return 0;
}
