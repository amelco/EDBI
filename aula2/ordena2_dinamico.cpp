#include <iostream>

// Modificação no segundo algoritmo de ordenação.
// Impede estouro de pilha quando se utiliza um tamanho grande de array.
// Faz isso utilizando alocação dinâmica (utilizando memória heap ao invés da stack).

int main(int argc, char* argv[])
{
    size_t n = std::atoi(argv[1]);
    int* numeros = new int[n];      // modificação (alocação dinâmica)

    for (size_t i = 0; i<n; i++)
    {
        numeros[i] = std::rand() % 1000;
    }

    for (size_t i = 0; i<n-1; i++)
    {
        for (size_t j = i+1; j<n; j++)
        {
            if (numeros[j] < numeros[i])
            {
                int tmp    = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = tmp;
            }
        }
    }
    
    for (size_t i = 0; i<n; i++)
    {
        std::cout << numeros[i] << "\n";
    }
    
    delete[] numeros;

}
