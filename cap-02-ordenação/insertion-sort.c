/* Algoritmo Insertion Sort
 * Referência: CLRS Capítulo 2.1
 * Complexidade do tempo: O(n²) no pior caso.
 */

#include <stdio.h>

void imprimirArray(const int arr[], const int tamanho);
void insertionSort(int arr[], const int tamanho);

int main(void) {
	//Sequência numérica do exercício 2.1-1
	//Para realizar mais testes, pode ser útil gerar números aleatórios.
	int arr[6] = {31, 41, 59, 26, 41, 58};
	int tamanho = 6;
	imprimirArray(arr, tamanho);
	insertionSort(arr, tamanho);
	imprimirArray(arr, tamanho);
	return 0;
}

//Função alheia ao algoritmo original. Foi criada para facilitar a impressão dos Arrays.
void imprimirArray(const int arr[], const int tamanho) {
	printf("[%d", arr[0]);
	for (int i=1; i<tamanho; i++) {
		printf(", %d", arr[i]);
	}
	printf("]\n");
}

void insertionSort(int arr[], const int tamanho) {
	int chave;
	//No CLRS, os índices dos arrays são de 1 a n. Como na maioria das linguagens os índices vão de 0 a n-1, fiz desta maneira.
	for (int i=1; i<tamanho; i++) {
		int j = i-1;
		chave = arr[i];

		//Move elementos maiores que a "chave" para a frente.
		while((j>=0) && (arr[j]>chave)) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = chave;
	}
}
