#include <stdio.h>
#include <string.h>
int main()
{
	char string[150], ch[150], dh[150];
	int a;
	scanf("%s", string);
	while(scanf("%d", &a) == 1|0)
	{
		memset(ch, 0, 150);
		memset(dh, 0, 150);
		if(a == 1)
		{
			scanf("%s", ch);
			strcat(string, ch);
		}else if (a == 0){
			strcpy(dh, string);
			scanf("%s", ch);
			strcat(ch, dh);
			memset(string, 0, 150);
			strcat(string, ch);
		}
        
	}
	printf("%s", string);
	return 0;
}
