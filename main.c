#include <stdio.h>

//Implementando uma fila
//14 de Agosto de 2024

#define TAM 20

struct fila{
  int dado[TAM];
  int inicio;
  int fim;
};

void criarFila(struct fila *fila);
void inserirFinal(struct fila *fila, int valor);
void removerInicio(struct fila *fila);
void imprimir(struct fila *fila);

int main(){
  struct fila filinha;
  criarFila(&filinha);
  inserirFinal(&filinha, 10);
  inserirFinal(&filinha, 20);
  inserirFinal(&filinha, 30);
  removerInicio(&filinha);
  imprimir(&filinha);
  

  return 0;
}


//Função para criar a fila
void criarFila(struct fila *fila){
  fila->inicio = -1;
  fila->fim = 20;
}

//Função para inserir um elemento no final da fila (TAIL)
void inserirFinal(struct fila *fila, int valor){
  if (fila->inicio >= TAM - 1){ 
      printf("Ops, a fila já está lotada!\n");
      return;
  }
  fila->inicio++;
  fila->dado[fila->inicio] = valor;
}

//Função para remover um elemento no início da fila (HEAD)
void removerInicio(struct fila *fila){
  if(fila->inicio == -1 && fila->fim == -1){
    printf("A fila esta vazia!\n");
    return;
  }
  fila->inicio--;
}


//Função para mostrar os elementos da fila 
void imprimir(struct fila *fila){
  printf("Fila: ");
  for (int i = 0; i <= fila->inicio; i++){
      printf("%d ", fila->dado[i]); 
  }
  printf("\n");
}

