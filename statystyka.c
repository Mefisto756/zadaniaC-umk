#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int iZestawow, iDanychWZestawie;
	int i,j, suma,srednia, tmp;
	int *WDane;
	suma=0;
	srednia=0;
	tmp=0;
	scanf("%d", &iZestawow);
	for (i = 0; i < iZestawow; ++i)
	{
		scanf("%d", &iDanychWZestawie);
		WDane = (int*)malloc(iDanychWZestawie*sizeof(int));
		for ( j = 0; i < iDanychWZestawie; ++i)
		{
			scanf("%d", &WDane[j]);
			suma=suma+WDane[j];
			tmp=tmp+WDane[j];
		}
		if (tmp>=srednia)
		{
			srednia = tmp;
		}
	}
	printf("SUMA = %d\n", suma);
	printf("NAJWYZSZA SREDNIA = %d\n", srednia);
	return 0;
}