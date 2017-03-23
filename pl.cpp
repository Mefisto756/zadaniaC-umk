#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int size;
	int *array;
	int j,i;

	scanf("%d", &n);
	scanf("%d", &size);

	array = (int*)malloc(size*sizeof(int));
    j=size;

	for (i = 0; i < size; ++i)
	{
		scanf("%d", &array[i]);
	}

	for (i = 0; i < j; ++i)
	{	
						printf("petla _i_ i = %d j = %d \n",i,j);
		for (j = size-1; j > i; --j)
		{
						printf("petla _j_ i = %d j = %d\n",i,j);

			if(array[i]+array[j]==n) {
				printf("%d", array[i]);
				printf(" %d \n",array[j]);
			}
		}
	}
	return 0;
}