#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void imprimir_vector(std::vector<int> imprimir) //Funcao para imprimir um vetor na tela.
{
  
  for(int i = 0; i < imprimir.size(); i++)
    std::cout << imprimir[i] << std::endl;
}

std::vector<int> inverter_com_copia(std::vector<int> vetorEntrada) 
{
    vector<int> inverti = {};

    for (int i = vetorEntrada.size()-1; i >= 0; i --) 
        inverti.push_back(vetorEntrada[i]);

    return inverti;
}

void embaralhar(std::vector<int> vetorEntrada) 
{   
    int local, tamanho = vetorEntrada.size();
    
    for (int n = 0; n < vetorEntrada.size(); n++) {
        local = rand() % vetorEntrada.size();
        swap (vetorEntrada[n], vetorEntrada[local]);
    }
}

void inverter_inplace(std::vector<int> vetorEntrada)
{
    int tamanho = int ( vetorEntrada.size() ) - 1;
    
    for (int n = tamanho, m = 0; n > tamanho / 2; n--, m++) {
        swap (vetorEntrada[n], vetorEntrada[m]);
    }
}

int sortear(std::vector<int> vetorEntrada) 
{   
    int lugar = rand() % vetorEntrada.size();
    return vetorEntrada[lugar];
}

void ordenar(std::vector<int> vetorEntrada)
{
    for (int n = 0; n < vetorEntrada.size() - 1; n++) {
        int test = n;
        
        for (int m = n + 1; m < vetorEntrada.size(); m++) {
            if (vetorEntrada[test] > vetorEntrada [m])
                test = m;
        }
        if (test != n)
            swap(vetorEntrada[n], vetorEntrada[test]);
    }
}

int main()
{
    std::vector<int> vetorEntrada = {10, 30, 50, 100, 2, -99};
    
    std::vector<int> imprimirInvertido = inverter_com_copia(vetorEntrada);
    
    cout << "Tela de Respostas!" << endl;
    cout << endl;
    
    cout << "Vetor com a ordem invertida: " << endl;
    imprimir_vector(imprimirInvertido);
    
    cout << "Vetor embaralhado: " << endl;
    embaralhar(vetorEntrada);
    
    cout << "Vetor com inplace invertido: " << endl;
    inverter_inplace(vetorEntrada);
    
    cout << "Vetor com valoeres sorteados: " << endl;
    sortear(vetorEntrada);
    
    cout << "Vetor com valores ordenados: " << endl;
    ordenar(vetorEntrada);
}