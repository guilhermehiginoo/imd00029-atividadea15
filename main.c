#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void)
{
  Fila fila;
  inicializar_fila(&fila);
  exibir_fila(&fila);

  inserir_fila(&fila, 10);
  inserir_fila(&fila, 50);
  exibir_fila(&fila);

  inserir_fila(&fila, 100);
  inserir_fila(&fila, 7);
  inserir_fila(&fila, 14);
  inserir_fila(&fila, 500);
  exibir_fila(&fila);


  printf("Elemento na frente: %d\n", consultar_primeiro(&fila));
    
  printf("Removendo elemento: %d\n", remover_fila(&fila));
  printf("Elemento na frente após remoção: %d\n", consultar_primeiro(&fila));

  exibir_fila(&fila);
  printf("Removendo elemento: %d\n", remover_fila(&fila));
  printf("Removendo elemento: %d\n", remover_fila(&fila));
  printf("Removendo elemento: %d\n", remover_fila(&fila));
  printf("Elemento na frente após remoção: %d\n", consultar_primeiro(&fila));
  exibir_fila(&fila);

  
  return 0;
}