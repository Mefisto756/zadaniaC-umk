#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char tablica[100000];
	int i = 0;
	scanf("%s",&tablica);
	while(i<=strlen(tablica)) {
		printf("%c", tablica[strlen(tablica)-i]);
		i=i+1;
	}
	printf("\n"); 
	return 0;
}
