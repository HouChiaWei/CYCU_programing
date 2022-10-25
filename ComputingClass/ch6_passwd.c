#include<stdio.h>
#define ps 5
int main()
{
    int n=0,flag=1;
    
    do{
        printf("%d. Enter your password(1~10): ",flag);
        scanf("%d",&n);

        if(n == ps){
            printf("\n\nCongratulations!");
            break;
        }else if(flag == 3 && n != ps){
            printf("\n\nYou are rejected!");
        }
    }while(flag++ < 3);
        
    return 0;   
}