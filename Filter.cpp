#include <iostream>
#include <vector>

std::vector<int> clonar_vetor(std::vector<int> recebido) //Funcao para clonar o vetor de entrada.
{
    
    std::vector<int> vetorCLONADO = {};
    
    vetorCLONADO.resize(recebido.size());
    
    for(int i = 0; i< recebido.size(); i++){
        vetorCLONADO[i] = recebido[i]; 
    }
    return vetorCLONADO;
}

void imprimir_vector(std::vector<int> imprimir) //Funcao para imprimir o valor clonado na tela.
{
  
  for(int i = 0; i < imprimir.size(); i++)
    std::cout << imprimir[i] << std::endl;
}

std::vector<int> pegar_homens(std::vector<int> homem) 
{
    std::vector<int> soHomem;
    
    for(int i = 0; i < homem.size(); i++){
        if( homem[i] > 0){
          soHomem.push_back(homem[i]);  
        }
    }
    return soHomem;
}

std::vector<int> pegar_calmos(std::vector<int> calm){
    
    std::vector<int> maisCalmos;
    
    for(int i = 0; i < calm.size(); i++){
        if( calm[i] > 0 && calm[i] < 10){
         maisCalmos.push_back(calm[i]);
        }
    }
    return maisCalmos;
}

std::vector<int> pegar_mulheres_calmas(std::vector<int> mulherCalm){
    
    std::vector<int> soMulher;
    
    for(int i = 0; i < mulherCalm.size(); i++){
        if( mulherCalm[i] < -10 && mulherCalm[i] >= -100)
        soMulher.push_back(mulherCalm[i]);
    }
    return soMulher;
}

int main()
{
    std::vector<int> recebido = {10, 30, 50, 100, 2, -99};
    std::vector<int> imprimido = clonar_vetor(recebido);
    std::vector<int> imprimir_homem = pegar_homens(recebido);
    std::vector<int> imprimir_calmos = pegar_calmos(recebido);
    std::vector<int> imprimir_mulher = pegar_mulheres_calmas(recebido);
    
    std::cout << "Tela de Respostas!" << std::endl;
    
    std::cout << "Vetor clonado: " << std::endl;
    imprimir_vector(imprimido);
    std::cout << std::endl;
    
    std::cout << "Homens do vetor: " << std::endl;
    imprimir_vector(imprimir_homem);
    std::cout << std::endl;
    
    std::cout << "Pessoas com stress menor que 10: " << std::endl;
    imprimir_vector(imprimir_calmos);
    std::cout << std::endl;
    
    std::cout <<"Mulheres com nível de stress menor que 10: " << std::endl;
    imprimir_vector(imprimir_mulher);
    std::cout << std::endl;
    
}