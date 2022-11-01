#include<stdio.h>

int main()
{
    char password[10];
    printf("請輸入10位英文密碼(不分大小寫) : ");
    scanf("%s",password);
    for(int j=0;j<10;j++)
    {
        if(password[j] < 96)
            printf("%4d",password[j]-60);
        else
            printf("%4d",password[j]-92);
    }
    return 0;
}