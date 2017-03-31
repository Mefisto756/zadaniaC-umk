#include <stdio.h>
#include <string.h>

int main() {
  //przygotowanie danych i zmiennych
  char slowo[256];
  int i = 0;
  int j = 0;
  scanf("%s", slowo);
  j = strlen(slowo)-1;

  //algorytm
  while (i<j) {
    if (slowo[i]!=slowo[j]) {
        printf("NIE\n");
        return 0;
    }
        i++;
        j--;
  }
  printf("JEST\n");
  return 0;
}
