#include <stdio.h>
int main(void) {
	int a;
	scanf("%d", &a);
	printf("Wejscie:");
	printf("%u", a);
	int i = 0;
	int b = 0;
	int v = 1;
	int p = 0;
	int f = a;
	printf("\n");
	while(i<a) {
		while(b<f) {
		printf(" ");
		b++;
		}
		while(p<v) {
		printf("*");
		p++;
		}
	printf("\n");
	p=0;
	v=v+2;
	i++;
	b=0;
	f--;
	}
	int t = 0;
	while(t<a) {
	printf(" ");
	t++;
	}
	printf("#\n");
	return 0;
}
