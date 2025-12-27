# Algoritmos do Capítulo 2 - Ordenação

Pasta com implementações de algoritmos do capítulo 2 do livro de Algoritmos (CLRS).

## Insertion Sort

O **Insertion Sort** é um algoritmo eficiente para ordenar um número pequeno de elementos. Ele funciona de maneira semelhante à forma como muitas pessoas ordenam cartas de baralho em suas mãos.

### Complexidade
* **Pior caso:** $O(n²)$ (quando o vetor está em ordem decrescente).
* **Melhor caso:** $O(n)$ (quando o vetor já está ordenado).

## Desafios da Implementação em C
O pseudocódigo do CLRS utiliza índices começando em 1 (A[1..n]). Em C, os vetores começam em 0, então ajustei o laço `for` para iniciar em `i = 1` e as comparações para considerar `j >= 0`.
