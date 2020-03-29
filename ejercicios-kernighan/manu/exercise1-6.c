/*
Verify that the expression getchar() != EOF is 0 or 1. 
*/
#include <stdio.h>

int main(){
  int c;
  c = getchar();

  printf("c: %c\n", c); // capturo el input del teclado (Ej. si presiono una tecla 'a')
  printf("EOF:%d \n", EOF);
  printf("c != EOF: %d\n", c != EOF); // me devuelve si llego al fin del flujo de datos
  
  /*
    Caso 1:
    Si presionamos una tecla 'a' y luego enter.
    La condicion (c != EOF) retorna 1

    Caso 2:
    Si presionamos enter
    La condicion (c != EOF) retorna 1

    Caso 3:
    Si presionamos Ctrl+D (finalizamos la ejecucion del programa)
    La condicion (c != EOF) retorna 0
    
    Observacion: En todos los casos EOF devuelve -1
   */  
  
  return 0;
}
