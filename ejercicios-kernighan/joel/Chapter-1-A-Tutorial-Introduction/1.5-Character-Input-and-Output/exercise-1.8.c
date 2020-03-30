#include <stdio.h>

int main(){
  int c;
  int espaciosBlanco = 0;
  int tabuladores = 0;
  int nuevasLineas = 0;

  c = getchar();
  while (c != EOF){

    if(c == ' '){
      espaciosBlanco += 1;
    } else if(c == '\t') {
      tabuladores += 1;
    } else if(c == '\n') {
      nuevasLineas += 1;
    }

    c = getchar();
  }

  printf("espacios en blanco: %d\ntabuladores: %d\nnuevas lineas: %d\n",
          espaciosBlanco, tabuladores, nuevasLineas);

  return 0;
}