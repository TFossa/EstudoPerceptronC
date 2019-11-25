#include <stdio.h>
#define threshold -1 
#define peso1 1 
#define peso2 -2

int main () {
	int x1, x2;
	float w1 = peso1, w2 = peso2;
	float soma;
	short int resposta;

	scanf("%d %d", &x1, &x2);

	soma = x1 * w1 + x2 * w2;

	if (soma <= threshold) resposta = 0;
	else if (soma > threshold) resposta = 1;

	printf("> %d\n", resposta);
	return 0;
}
