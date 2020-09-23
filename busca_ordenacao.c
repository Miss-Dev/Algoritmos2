#include <stdio.h>
//Forneça um exemplo de aplicação real que envolva o problema de
// ordenação e de encontrar o menor valor em um conjunto.
int menor(int vet[], int tam){
  int troca = 0;
  for(int i = 1; i<tam; i++){
    for(int j = 0; j<tam-i; j++){
      if(vet[j]>vet[j+1]){
        troca = vet[j];
        vet[j] = vet[j+1];
        vet[j+1] = troca;
      }
    }
    
  } 
  return vet[0];
}
int main(void) {
  int tam = 0;
  printf("Digite o tamanho para o vetor:\n");  
  scanf("%d", &tam);
  int vet[tam];
  for(int i = 0; i<tam; i++){
    printf("vet[%i]: ", i);
    scanf("%d", &vet[i]);
  }
  printf("O menor numero do conjunto é: %d ", menor(vet, tam));
  return 0;
}
