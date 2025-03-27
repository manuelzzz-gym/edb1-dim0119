#include <iostream>
#include <cmath>

using namespace std;

int jump_search(int lista[], int target, int tamanho)
{
    if (tamanho <= 0)
        return -1;

    int tamanhoJump = sqrt(tamanho);
    int anterior = 0;
    int atual = 0;

    while (atual < tamanho && lista[atual] < target)
    {
        anterior = atual;
        atual += tamanhoJump;
    }

    for (int i = anterior; i <= min(atual, tamanho - 1); i++)
    {
        if (lista[i] == target)
        {
            return i;
        }
    }

    return -1;
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

    posicao = jump_search(vetor, target, tamanho_array);

    if (posicao == -1)
    {
        cout << "Elemento não encontrado\n";
        return 1;
    }

    cout << "Elemento encontrado na posição " << posicao << "\n";
    return 0;
}
