#include <stdio.h>
#include <stdlib.h>

// pegar dois indices de cada vez
// comparar se sao menores ou maiores do que os ja conhecidos
// se ambos forem menores do que o ja conhecido, ver o menor entre os dois
// o inverso se aplica para caso ambos sejam maiores
// o que poupa de memoria é o fato de incrementar de dois em dois ao inves de um em um

int extremos(int tamanho, int vetor[]) {
	int min = vetor[0];
	int max = vetor[0];
	
	int i = 0;
	while (i < tamanho) {
		if (vetor[i] > max || vetor[i + 1] > max) {
			if (vetor[i] > vetor[i + 1]) {
				max = vetor[i];
			} else {
				max = vetor[i + 1];
			}

		} else if (vetor[i] < min || vetor[i + 1] < min) {
			if (vetor[i] < vetor[i + 1]) {
				min = vetor[i];
			} else {
				min = vetor[i + 1];
			}
		}
		
		i = i + 2;
	}
	
	printf("%d, %d", min, max);
}

int main () {
	int v[6] = {7, 1, -10, 3, 4, 5};

	extremos(6, v);

	return 0;
}
