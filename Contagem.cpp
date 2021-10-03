#include <iostream>
#include <vector>

using namespace std;

float calcular_stress_medio(vector<int> fila)
{
    float media = 0, soma = 0;
    
    for(int n = 0; n < fila.size(); n++) {
    
    if (fila[n] <0) {
        soma = soma + fila[n] * -1;
    }else if(fila[n] >0){
        soma = soma + fila[n];
    }
}  
    media = soma/fila.size();
    
    return media;
}

string mais_homens_ou_mulheres(vector<int> fila){
    
    int qntd_homem = 0, qntd_mulher = 0;
    
    for(int n = 0; n < fila.size(); n++) {
        if (fila[n] >0) {
            qntd_homem++;
    }else
        qntd_mulher++;
    }

    if (qntd_homem > qntd_mulher)
        return "Homens!";
    else if(qntd_homem < qntd_mulher)
        return "Mulheres!";
    else if(qntd_homem = qntd_mulher)
        return "Empate!";

}

string metade_maior_media(vector<int> fila)
{
    float metade1, metade2;
    float media_m1, media_m2;
    
    for(int n= 0; n < fila.size(); n++) {
        if(n < fila.size() / 2) {
            metade1 += fila[n];
        } else { 
            metade2 += fila[n];
        }
            
    }
        // Calculo da media.
    media_m1 = metade1 / (fila.size() / 2);
    media_m2 = metade2 / (fila.size() / 2);
    
        // Calculo pra saber qual eh a maior/menor.
    if (media_m1 > media_m2)
        return "Primeira! ";
    else if(media_m1 < media_m2)    
        return "Segunda! ";
    else if(media_m1 = media_m2)
        return "Empate! ";
    }

bool homens_sao_mais_estressados_que_mulheres(vector<int> fila)
{
    int homem, mulher;
    float soma_homem = 0, soma_mulher = 0;
    float media_homem = 0, media_mulher = 0;
    
    for(int n= 0; n < fila.size(); n++) {
        if (fila[n] < 0) { 
            soma_mulher += fila[n];
            mulher ++;
    } else {
            soma_homem += fila[n];
            homem++;
    }
}
    media_mulher = soma_mulher / mulher;
    media_homem = soma_homem / homem;
    
    if (media_mulher > media_homem)
        return false;
    else if (media_mulher < media_homem)
        return true;
    else
        return false;
}

int main()
{
    vector<int> fila = {10, 30, 50, 100, 2, -99};

    cout << "Tela de Respostas!" << endl;
    cout << endl;
    cout << "Media da fila: " << calcular_stress_medio(fila) << endl; // Calcular a media da fila. (Numeros negativos viram positivos)
    cout << "O sexo mais estressado da fila: " << mais_homens_ou_mulheres(fila) << endl; // Saber se na fila existem mais homens ou mulheres.
    cout << "A metade com maior media: " << metade_maior_media(fila) << endl;
    cout << endl;
    cout << "Atencao, se a resposta a seguir for 1, entao os homens tem a maior media de estresse do que as mulheres! " << endl;
    cout << "Media do estresse dos homens eh maior que a das mulheres: " << homens_sao_mais_estressados_que_mulheres << endl; // 
}