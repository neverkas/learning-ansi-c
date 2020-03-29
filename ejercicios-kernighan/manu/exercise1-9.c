/*
PENDIENTE A TERMINAR

Write a program to copy its input to its output, replacing each string of one or 
more blanks by a single blank. 
 */

#include <stdio.h>

int main(){
  double c, nc;
  int contadorCaracteres, contadorEspaciosEnBlanco;

  contadorEspaciosEnBlanco = contadorCaracteres = 0;

  // guardamos el input del teclado (las teclas capturadas)
  // en el flujo de datos (text stream) de la variable c
  // que es de tipo "double" para poder asignar mayor cantidad de informacion
  
  for(nc=0; c != EOF; nc++){
    c = getchar();
    if(c == ' ') contadorEspaciosEnBlanco++;
    if(contadorEspaciosEnBlanco > 1) nc--;
    putchar(c);    
  }
  
  printf("%s\n", c);
  
  return 0;
}
