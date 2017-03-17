#include <stdio.h>

int main(int argc, char *argv[]) {
	char tablica[5];
	int i = 0;
	scanf("%s",&tablica);
	while(i>=0) {
		printf("%c", tablica[i]);
		i--;
	}
	printf("\n"); 
	return 0;
}
