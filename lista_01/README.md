# Resolução das questões - Lista 01

## 1. Busca Sequêncial

#### Implemente um algoritmo de busca sequencial que receba uma lista de números inteiros e um número-alvo. O programa deve percorrer a lista elemento por elemento até encontrar o número ou determinar que ele não está na lista.

###### Entrada:

-   Uma lista de números inteiros.
-   Um número inteiro X a ser buscado.

###### Saída:

-   A posicão (índice) onde o número foi encontrado.
-   Se não for encontrado retornar -1.

Exemplo:

```
Entrada: lista = [10, 25, 33, 42, 50], X = 33
Saída: Número encontrado na posicão 2
```

## 2. Busca Binária

#### Implemente um algoritmo de busca binária para encontrar um número em uma lista ordenada de inteiros. O programa deve dividir repetidamente a lista pela metade até encontrar o número ou concluir que ele não está presente.

###### Regras:

-   A lista fornecida sempre estará ordenada em ordem crescente.
-   O algoritmo deve usar a abordagem de dividir e conquistar (recursiva ou iterativa).

###### Entrada:

-   Uma lista ordenada de inteiros.
-   Um número inteiro X a ser buscado.

###### Saída:

-   A posi¸cão (índice) onde o número foi encontrado.
-   Se não for encontrado retornar -1.

Exemplo:

```
Entrada: lista = [5, 12, 19, 26, 33, 42, 58], X = 26
Saída: Número encontrado na posicão 3
```

## 3. Jump Search

#### Implemente um algoritmo de Jump Search para encontrar um número em uma lista ordenada de inteiros. O programa deve usar um tamanho de salto de √ n para otimizar a busca e, em seguida, realizar uma busca sequencial dentro do bloco identificado.

###### Regras:

-   A lista fornecida sempre estará ordenada em ordem crescente.
-   O tamanho do salto deve ser aproximadamente √n, onde n é o tamanho da lista.

###### Entrada

-   Uma lista ordenada de inteiros.
-   Um número inteiro X a ser buscado.

###### Saída:

-   A posição (índice) onde o número foi encontrado.
-   Se não for encontrado retornar -1.

Exemplo:

```
Entrada: lista = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21], X = 15
Saída: Número encontrado na posi¸cão 7
```
