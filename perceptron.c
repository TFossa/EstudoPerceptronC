#include <stdio.h>
#define bias -1

int main () {
	int x[2];
	float weight[6] = {1,1,2,2};
	float soma[3];
	short int resposta[3];

	scanf("%d %d", &x[0], &x[1]);

	// Primeiro perceptron > and
	soma[0] = x[0] * weight[0] + x[1] * weight[1] + bias;

	if (soma[0] < 1) resposta[0] = 0;
	else resposta[0] = 1;
	// segundo perceptron > or
	soma[1] = x[0] * weight[2] + x[1] * weight[3] + bias;

	if (soma[1] > 0) resposta[1] = 1;
	else resposta[1] = 0;
	// perceptron final
	soma[2] = resposta[0] * weight[4] + resposta[1] * weight[5] + bias;
	

	printf("> %d\n", resposta[2]);
	return 0;
}
