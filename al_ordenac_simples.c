/*
Algoritmos de Ordenção para disciplina de Análise e Projeto de Algoritmos
*/

#include <stdio.h>
#include <stdlib.h>


//Função de mostrar vetor na saída padrão
void std_out_vetor(int *vetor, int tam){
    for(int i =0; i<tam;i++){
        printf("%d ",vetor[i]);
    }
}


//Função de ordenação Insertion Sort
void insertion_Sort(int *vetor, int tam_vet){
    int chave, i,j;

    for(j=1; j<tam_vet;j++){
        chave = vetor[j];
        i = j - 1;
        while(i>=0 && vetor[i] > chave){
            vetor[i+1] = vetor[i];
            i = i-1;
        }
        vetor[i+1] = chave;
    }
    //printf("\n");
    //std_out_vetor(vetor,5);
} 

void selection_sort(int *vet, int tam_vet){
    int i,j,min,t;

    for(i=0; i<tam_vet;i++){
        min = i;
        for(j=i+1; j<tam_vet;j++){
            if(vet[j] < vet[min]){
                min = j;
            }
        }
        t = vet[min];
        vet[min]= vet[i];
        vet[i] = t;
    }
}

void Bubble_Sort(int *vet, int tam){
    int i,j,t;
    for(i=tam-1; i<=0;i--){
        for(j=0;j<=i;j++){
            if(vet[j-1] > vet[j]){
                t = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = t;
            }
        }
    }
}



int main(){


    /**
     * 
     * Insertion Sort
    int vet[5] = {5,4,3,2,1};
    printf("Vetor inicio: ");
    std_out_vetor(vet,5);
    
    insertion_Sort(vet,5);
    printf("\nVetor Ordenado: ");
    std_out_vetor(vet,5);
    **/


    /**
     * 
    int vet[5] = {5,4,3,2,1};
    printf("Vetor inicio: ");
    std_out_vetor(vet,5);
    
    selection_sort(vet,5);
    printf("\nVetor Ordenado: ");
    std_out_vetor(vet,5);
    
    **/


    int vet[5] = {5,4,3,2,1};
    printf("Vetor inicio: ");
    std_out_vetor(vet,5);
    
    Bubble_Sort(vet,5);
    printf("\nVetor Ordenado: ");
    std_out_vetor(vet,5);
}