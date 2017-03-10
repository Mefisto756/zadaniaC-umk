#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main() {

  int tSize;
  int whichOne;
  int *array;
  int i;

  printf("Podaj wielkosc tablicy oraz ktory najmniejszy element: ");
  scanf("%d", &tSize);
  scanf("%d", &whichOne);

  if (whichOne>tSize) {

    printf("ERROR: ciag liczy tylko %d elementow\n", tSize);

  } else {

    whichOne=whichOne-1;
    array = (int*)malloc(tSize*sizeof(int));
    printf("Podaj dane do tablicy: ");

    for (i = 0; i < tSize; i++) {
      scanf("%i",&array[i]);
    }

    qsort(array,tSize,sizeof(int),cmpfunc);
    printf("%d",array[whichOne]);
    printf("\n");

  }
  return 0;
}
