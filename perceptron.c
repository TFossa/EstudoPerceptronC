#include <stdio.h>
#define threshold 1
#define peso1 1
#define peso2 1
#define peso3 1

int main () {
		int x1, x2, x3;
		int w1 = peso1, w2 = peso2, w3 = peso3;
		short int resultado;
		float soma;
		float totalX, totalW;

		scanf("%d %d %d", &x1, &x2, &x3);

		totalX = x1 + x2 + x3;
		totalW = w1 + w2 + w3;
		soma = (totalX) / (totalW);

		if (soma <= threshold) resultado = 0;
		else resultado = 1;

		printf("> %d\n", resultado);
		return 0;
}