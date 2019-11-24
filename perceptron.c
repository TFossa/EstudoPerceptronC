#include <stdio.h>
#define threshold 7
#define peso1 4 
#define peso2 2 
#define peso3 3

int main () {
		int x1, x2, x3;
		int w1 = peso1, w2 = peso2, w3 = peso3;
		short int resposta;
		int soma;

		scanf("%d %d %d", &x1, &x2, &x3);

		soma = x1 * w1 + x2 * w2 + x3 * w3;

		if (soma >= threshold) resposta= 1;
		else reaposta = 0;

		printf("> %d\n", resposta);
		return 0;
}
