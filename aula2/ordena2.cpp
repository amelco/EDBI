#include <iostream>

// Segundo algoritmo de ordenação.
// Feito após pesquisa no google.

int main(int argc, char* argv[])
{
    size_t n = std::atoi(argv[1]);
    int numeros[n];

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

}
