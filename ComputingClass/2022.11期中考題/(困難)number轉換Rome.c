#include<stdio.h>
#include<stdlib.h>

int func(char ,char);

int main()
{
    int result = 0;
    char rome[7]={0};
    printf("請輸入羅馬數字1~6位: ");
    scanf("%s",rome);

    for(int i=0;i<6;i++)
    {
        if(func(rome[i],rome[i+1]))
        {
            if(rome[i]==73) ///I
                result -= 1;
            if(rome[i]==86) ///V 
                result -= 5;
            if(rome[i]==88) ///X
                result -= 10;
            if(rome[i]==76) ///L
                result -= 50;
            if(rome[i]==67) ///C
                result -= 100;
            if(rome[i]==68) ///D
                result -= 500;
            if(rome[i]==77) ///M 
                result -= 1000;
        }else{
            if(rome[i]==73) ///_I 
                result += 1;
            if(rome[i]==86) ///V 
                result += 5;
            if(rome[i]==88) ///X
                result += 10;
            if(rome[i]==76) ///L
                result += 50;
            if(rome[i]==67) ///C
                result += 100;
            if(rome[i]==68) ///D
                result += 500;
            if(rome[i]==77) ///M 
                result += 1000;
        }
    }
    printf("%d",result);
    return 0;
}
int func(char a,char b)
{
    int x=0,y=0;
    if(a==73) ///I 
        x = 1;
    else if(a==86) ///V 
        x = 5;
    else if(a==88) ///X
        x = 10;
    else if(a==76) ///L
        x = 50;
    else if(a==67) ///C
        x = 100;
    else if(a==68) ///D
        x = 500;
    else if(a==77) ///M 
        x = 1000;

    if(b==73) ///I 
        y = 1;
    else if(b==86) ///V 
        y = 5;
    else if(b==88) ///X
        y = 10;
    else if(b==76) ///L
        y = 50;
    else if(b==67) ///C
        y = 100;
    else if(b==68) ///D
        y = 500;
    else if(b==77) ///M 
        y = 1000;

    if(x<y)
        return 1;
    else   
        return 0;
}