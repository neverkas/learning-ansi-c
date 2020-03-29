/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines. 
*/
#include <stdio.h>

int main(){
  int c;
  int espaciosEnBlanco, tabulaciones, nuevasLineas;

  espaciosEnBlanco=tabulaciones=nuevasLineas=0;
  
  // (c = getchar())
  // Capturamos los input (datos de entrada) del teclado (las teclas)
  
  // (c = getchar()) != EOF)
  // Mientras no se termine el flujo de datos de entrada (con Ctrl+D finaliza el proceso)
  // el while se seguira ejecutando
  while((c = getchar()) != EOF){
    // es importante encapsular (c = getchar())
    // ya que el operador != tiene mayor prioridad que el =

    if(c == '\n') nuevasLineas++;
    if(c == '\t') tabulaciones++;
    if(c == ' ')  espaciosEnBlanco++;
    // putchar(c);
    // imprimimos por pantalla al presionar "Enter" (porque detecta nueva linea)
    // lo que se guarda en el buffer (o flujo de datos) que le asignamos a la variable c
  }
  
  // imprimimos por pantalla
  // recordemos que se imprimiran luego de presionar Ctrl+D
  printf("nuevasLineas: %d\n", nuevasLineas);
  printf("tabulaciones: %d\n", tabulaciones);
  printf("espaciosEnBlanco: %d\n", espaciosEnBlanco);

  
  return 0;
}
