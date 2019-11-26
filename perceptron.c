#include <stdio.h>
#define thresholdp1 1 
#define thresholdp2 0 
#define peso 1 

int main () {
	int x1, x2;
	float w1 = peso, w2 = peso;
	float soma;
	short int resposta1, resposta2, respostaf;

	scanf("%d %d", &x1, &x2);

	// Primeiro perceptron > and
	soma = x1 * w1 + x2 * w2;

	if (soma <= thresholdp1) resposta1 = 0;
	else if (soma > thresholdp1) resposta1 = 1;

	// segundo perceptron > or

	if (soma <= thresholdp2) resposta2 = 0;
	else if (soma > thresholdp2) resposta2 = 1;

	// perceptron final
	if (resposta1 == resposta2) respostaf = 0;
	else respostaf = 1;
	

	printf("> %d\n", respostaf);
	return 0;
}
