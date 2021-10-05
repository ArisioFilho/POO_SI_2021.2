#include <iostream>
#include <stdbool.h>

using namespace std;

bool busca_existe(int vetor[], int lista, int value){
	
	for(int n = 0; n < lista; n++){
		if (value==vetor[n]){
		    return true;
		}
	}
	return false;
}

int busca_contar(int vetor[], int lista, int value){
    
    int cont = 0;
    
    for(int n = 0; n < lista; n++){
        if(value == vetor[n]){
        
        cont++;
        
        }
    }
    return cont;
}    

int busca_valor(int vetor[], int lista, int value){
    
    int pos;
    
    for(pos = 0; pos < lista; pos++){
        
        if(value == vetor[pos]){
        
        break;
        }   
    }
    if(pos <lista){
        cout << "Posicao: " << pos << "\n";
    } else {
        cout << "Posicao: " << -1 << "\n";
    }
    return true;
}

int busca_valor_apartir(int vetor[], int lista, int num, int value)
{
    int n, a, final;
    n = value;
    a = value;
    
    for(n; n < lista; n++){
        for(a; a < lista; a++){         
            if( num == vetor[a]){
                final = a;
                break;                
            }
        }
    }
    
    if(a < lista){
        cout << num << " aparece no vetor depois da posicao " << value <<" na posicao: " << final << endl;
    } else {
        return false;
    }
}

int main(){
	
	int tamFila = 5;
	int fila [ tamFila ] = {50, 80, -10, 20, 70};

    cout << "Tela de Respostas!" << endl;
    
    cout << busca_existe(fila, tamFila,50) << "\n";   // Buscando o valor 50 na lista. 1- Esta na lista e 2 - Nao esta;
    cout << busca_contar(fila, tamFila,50) << "\n";   // Contando o valor 50 na lista.
    cout << busca_valor (fila, tamFila,50) << "\n";   // Procurar a primeira posicao do 50 na lista.
    cout << busca_valor_apartir(fila, tamFila, 20 , 2) << "\n"; // Procurar valor a partir de uma posicao.
}