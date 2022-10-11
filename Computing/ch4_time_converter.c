/* ch4_time_converter.c */
#include <stdio.h>

int main()
{
    unsigned int arr[5] = {0};
    printf("------Time_convert_program-----\n\nPlease input a number of second : ");
    scanf("%u",&arr[0]);
    
    for(int i=0;i<2;i++)
    {
        arr[i+1] = arr[i] / 60;   ///Convert Mins & Hours
        arr[i] %= 60;
    }
    
    arr[3] = arr[2] / 24;       ///Convert Days
    arr[2] %= 24;
    
    arr[4] = arr[3] / 365;      ///Convert Years
    arr[3] %= 365;
    
    printf("\nThe Final Result : %u Year(s) %u Day(s) %u Hour(s) %u Minute(s) %u second(s) .\n\n",arr[4],arr[3],arr[2],arr[1],arr[0]);
    
    return 0;
}
