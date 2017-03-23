#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char words[256];
  int length,i;
  int *array = (int*)malloc(10*sizeof(int));

  for (i = 0; i < 10; i++) {
    array[i]=0;
  }
  i = 0;
  do {
      int ch = getchar();
      if (ch == EOF) break;
      words[i] = ch;
      i++;
  } while (i < 255);
  length=strlen(words);

  for (i = 0; i < length; i++) {
    printf("\nIndeks %d czyli znak %c\n",i,words[i]);
    switch (words[i]) {
      case '0':
        printf("\t0, zwiekszenie szufladki(obecnie %d) o jeden", array[0]);
        array[0]++;
        break;
      case '1':
      printf("\t1, zwiekszenie szufladki(obecnie %d) o jeden", array[1]);
        array[1]++;
        break;
      case '2':
      printf("\t2, zwiekszenie szufladki(obecnie %d) o jeden", array[2]);
        array[2]++;
        break;
      case '3':
      printf("\t3, zwiekszenie szufladki(obecnie %d) o jeden", array[3]);
        array[3]++;
        break;
      case '4':
      printf("\t4, zwiekszenie szufladki(obecnie %d) o jeden", array[4]);
        array[4]++;
        break;
      case '5':
      printf("\t5, zwiekszenie szufladki(obecnie %d) o jeden", array[5]);
        array[5]++;
        break;
      case '6':
      printf("\t6, zwiekszenie szufladki(obecnie %d) o jeden", array[6]);
        array[6]++;
        break;
      case '7':
      printf("\t7, zwiekszenie szufladki(obecnie %d) o jeden", array[7]);
        array[7]++;
        break;
      case '8':
      printf("\t8, zwiekszenie szufladki(obecnie %d) o jeden", array[8]);
        array[8]++;
        break;
      case '9':
      printf("\t9, zwiekszenie szufladki(obecnie %d) o jeden", array[9]);
        array[9]++;
        break;
      }

  }

  for (i = 0; i < 10; i++) {
    printf("%d:%d\n",i, array[i]);
  }
  return 0;
}
