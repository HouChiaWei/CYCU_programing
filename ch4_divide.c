/* ch4_divide.c */
#include <stdio.h>

int main()
{
    int op1 = 10;
    int op2 = 4;
    double op3 = 10.0;
    double op4 = 4.0;
    
    printf("Divide and Truncation ...\n\n");
    printf("%d / %d = %d \n", op1, op2, op1/op2);
    printf("%d / %.2f = %.2f \n", op1, op4, op1/op4);
    printf("%.2f / %.2f = %.2f \n", op3, op4, op3/op4);
    printf("%.2f / %d = %.2f \n", op3, op2, op3/op2);
    
    /*Another try */
    float op5 = 0.111111;
    float op6 = 0.0222222;
    
    printf("%.4f / %.4f = %.5f \n", op5, op6, op5/op6);
    
    return 0;
}
