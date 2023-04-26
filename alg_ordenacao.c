#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*função de ornação simples*/

int *ordenaVetor(int *vetor, int tamanho){

}

/* 
Função de busca linear em um vetor de inteiros passado por referencia 
*/
int buscaLinear(int *vetor, int elemento, int posA, int posB){

    int indice = posA;
    int posicaoFinal = posB;

    while(indice <= posicaoFinal){
        if (vetor[indice] == elemento){
            return indice;
        }
        indice++;
    }
    return -1;
}
/*Funcao que busca um elemento
o requisito dessa função é receber o vetor já ORDENADO
*/
int BuscaLinearEmOrdem(int *vetor, int elemento, int posA, int posB){
    
    int indice = posA;
    int posicaoFinal = posB;

    while (indice <= posicaoFinal && vetor[indice] < elemento){
        if(vetor[indice] == elemento){
            return indice;
        }
        indice++;
    }

    return -1;
}



int main(){

    //Criando vetor com valores inteiros aleatórios no intervalo entre 1 e 100
    srand(time(0));
    int tam = 100;
    int vet[tam];
    for(int i = 0; i < tam; i++){
        vet[i] = rand() % 101 + 1;
    }



    printf("%d\n", buscaLinear(&vet[0], 5, 0,100));
    return 0;
}