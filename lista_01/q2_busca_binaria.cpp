#include <iostream>

using namespace std;

int busca_binaria(int lista[], int target, int tamanho)
{
    if (tamanho == 0)
    {
        return -1;
    }

    int meio = tamanho / 2;

    if (lista[meio] == target)
    {
        return meio;
    }

    if (lista[meio] < target)
    {
        return busca_binaria(lista + meio + 1, target, tamanho - meio - 1);
    }

    return busca_binaria(lista, target, meio);
}

int main(int argc, char const *argv[])
{
    int tamanho_array, posicao, target;
    cout << "Digite o tamanho do array: \n";
    cin >> tamanho_array;

    int vetor[tamanho_array];
    cout << "Digite os elementos do array: \n";
    for (int i = 0; i < tamanho_array; i++)
    {
        cin >> vetor[i];
    }

    cout << "Digite o valor a ser buscado: \n";
    cin >> target;

    posicao = busca_binaria(vetor, target, tamanho_array);

    if (posicao == -1)
    {
        cout << "Elemento não encontrado\n";
        return 1;
    }

    cout << "Elemento encontrado na posição " << posicao << "\n";
    return 0;
}
