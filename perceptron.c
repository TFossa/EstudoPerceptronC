#include <stdio.h>
#define threshold 6 
#define peso1 1
#define peso2 2
#define peso3 3

int main () {
	int x1, x2, x3;
	int w1, w2, w3;
	int soma, r;

	scanf("%d %d %d", &x1, &x2, &x3);

	w1 = peso1;
	w2 = peso2;
	w3 = peso3;

	soma = (x1 + x2 + x3) / (w1 + w2 + w3);

	if (soma <= threshold) r = 0;
	else r = 1;

	printf("%d\n", r);
	return 0;
}
