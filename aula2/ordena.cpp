#include <iostream>

// Primeiro algoritmo de ordenação.
// Feito sem pesquisa no google.

int main(int argc, char* argv[]) 
{
    int n = std::atoi(argv[1]);

	size_t numeros[n];

    bool trocado = false;
	
	for (size_t i=0; i<n; i++) 
    {
        numeros[i] = std::rand();
	}
   
    do
    {
        trocado = false;
        for (size_t i=0; i<n-1; i++)
        {
            if (numeros[i] > numeros[i+1])
            {
                int temp = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = temp;
                trocado = true;
            }
        }
    }
    while (trocado);
    
    for (size_t i=0; i<n; i++)
    {
        std::cout << numeros[i] << "\n";
    }


	return 0;
}
