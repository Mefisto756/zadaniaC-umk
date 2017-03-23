#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a==0)
	{
		printf("1");
	} else if (a==1)
	{
		printf("2");
	} else if (a>=2)
	{
		printf("%d",2<<a-1);
	}
	return 0;
}