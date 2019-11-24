#include <stdio.h>
#define bias 2
#define peso1 2 
#define peso2 1 

int main () {
	int x1, x2;
	float w1 = peso1, w2 = peso2;
	float soma;
	short int resposta;

	scanf("%d %d", &x1, &x2);

	soma = x1 * w1 + x2 * w2 + bias;

	printf("s = %f\n", soma);

	if (soma <= 0) resposta = 0;
	else if (soma > 0) resposta = 1;

	printf("> %d\n", resposta);
	return 0;
}
