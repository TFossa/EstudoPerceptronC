#include <stdio.h>
#define threshold 5
#define peso1 3 
#define peso2 1 
#define peso3 2

int main () {
	int x1, x2, x3;
	float w1 = peso1, w2 = peso2, w3 = peso3;
	float soma;
	short int resposta;

	scanf("%d %d %d", &x1, &x2, &x3);

	soma = x1 * w1 + x2 * w2 + x3 * w3;

	if (soma >= threshold) resposta= 1;
	else resposta = 0;

	printf("> %d\n", resposta);
	return 0;
}
