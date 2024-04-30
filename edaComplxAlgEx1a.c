#include <stdio.h>
#include <stdlib.h>

int extremos(int tamanho, int vetor[]) {
	int min = vetor[0];
	int max = vetor[0];
	
	int i = 1;
	for (; i < tamanho - 1; i++) {
		if (vetor[i] < min) {
			min = vetor[i];
		}
		
		if (vetor[i] > max) {
			max = vetor[i];
		}
	}
	
	printf("%d, %d", min, max);
}

int main () {
	int v[6] = {7, 1, -10, 3, 4, 5};
	
	extremos(6, v);
	
	return 0;
}
