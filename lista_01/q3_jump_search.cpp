#include <iostream>

using namespace std;

int jump_search(int lista[], int target, int tamanho)
{
    int jump = sqrt(tamanho);

    for (int i = 0; i < tamanho; i += jump)
    {
        if (lista[i] == target)
        {
            return i;
        }
        if (lista[i] > target)
        {
            for (int j = i - jump; j < i; j++)
            {
                if (lista[j] == target)
                {
                    return j;
                }
            }
            return -1;
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
