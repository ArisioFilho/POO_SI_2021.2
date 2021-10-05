#include <iostream>
#include <vector>

using namespace std;

int procurar_menor(vector<int> fila)
{
    int menor_num = fila[0];
    
    for (int n = 0; n < int (fila.size()); n++) {
        if (fila[n] < menor_num)
            menor_num = fila[n];
    }

    return menor_num;
}

int procurar_menor_pos(vector<int> fila)
{
    int menorPos = 0;
    
    for(int n = 0; n < fila.size(); n++) {
        if(fila[n] = fila[menorPos])
            menorPos = n;
    }
    return menorPos;
}

int procurar_menor_apartir(vector<int> fila, int x, int inicio)
{
     
    for (int n = inicio; n < fila.size(); n++){
        if (fila[n] == x)   
        
          return n;
    }
    return -1;
}

int procurar_melhor_pos_se(vector<int> fila)
{
    int mais_calmo = -1;
    
    for (int n = 0; n < fila.size(); n++){
        if(mais_calmo == -1 && fila[n] > 0){
            mais_calmo = n;
        } else if(fila[mais_calmo] > fila[n] && fila[n] > 0){
            mais_calmo = n;
        }
    }
    return mais_calmo;  
}

int main(){
	
	vector<int> fila = {10, 30, 50, 100, 2, -99};

    cout << "Tela de Respostas!" << endl;
    
    cout << "Menor valor: " << procurar_menor(fila) << endl; // Nessa lista a resposta correta seria -99.
    cout << "Posicao do menor numero: " << procurar_menor_pos(fila) << endl; // Nessa lista a respota correta seria 5.
    cout << "A posicao do menor valor a partir da determinada posicao: " << procurar_menor_apartir(fila, 50, 2) << endl; // Buscando o valor 50 a partir da Pos 2;
    cout << "O homem mais calmo: " << procurar_melhor_pos_se(fila) << endl; // Procurar o homem mais calmo nessa lista.
    
    return 0;
}