#include <stdio.h>
#define thresholdp1 1 
#define thresholdp2 0 
#define thresholdp3 0 
#define pesop1p2 1 
#define pesor1p3 1
#define pesor2p3 -1

int main () {
	int x1, x2;
	float w1 = pesop1p2, w2 = pesop1p2;
	float w3 = pesor1p3, w4 = pesor2p3;
	float somap1, somap2, somap3;
	short int respostap1, respostap2, respostap3;

	scanf("%d %d", &x1, &x2);

	// Primeiro perceptron > and
	somap1 = x1 * w1 + x2 * w2;

	if (somap1 <= thresholdp1) respostap1 = 0;
	else if (somap1 > thresholdp1) respostap1 = 1;

	// segundo perceptron > or
	somap2 = x1 * w1 + x2 * w2;

	if (somap2 <= thresholdp2) respostap2 = 0;
	else if (somap2 > thresholdp2) respostap2 = 1;

	// perceptron final
	somap3 = respostap1 * w3 + respostap2 * w4;
	
	if (somap3 == thresholdp3) respostap3 = 0;
	else respostap3 = 1;

	printf("> %d\n", respostap3);
	return 0;
}
