#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main()
{
	float a,b,t,result;
    printf("請輸入半徑與高:");
	scanf("%f %f",&a,&b);

    result = pi *a *a *b /3;
	printf("\n圓錐體積 = %.2f",result);

    result = 0;
    result = pi *a *a;
    t = sqrt(a*a + b*b);
    t *= pi*a;
    result += t;
    printf("\n圓錐表面積 = %.2f",result);

	return 0;
}
