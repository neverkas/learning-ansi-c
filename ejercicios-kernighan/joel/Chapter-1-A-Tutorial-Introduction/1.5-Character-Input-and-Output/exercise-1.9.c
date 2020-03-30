#include <stdio.h>

int main(){

  int c;
  int espacios = 0;

  for (;(c = getchar()) != EOF;){
    if(c == ' ' && espacios < 1){
      putchar(' ');
      espacios += 1;
    } else if(c != ' '){
      putchar(c);
    }

    if(c == '\n'){
      espacios = 0;
    }
  }
  return 0;
}