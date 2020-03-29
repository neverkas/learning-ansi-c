#include <stdio.h>

int main(void){
  int c;

  // while ((c = getchar()) != EOF) {
  //   if (c == EOF)
  //     break;
  //   putchar(c);
  // }

  // (c = getchar()) != EOF; // int c: it returns the ascii value of the first character from input
                             // works with while statement

  // while ((c = getchar()) != EOF){ // it loops | returns -1 when ctrl+d
  //                                 // seems like after performing ctrl+d, the next character that the
  //                                 // getchar() function reads is, eventually, the end of file.
  //                                 // the flux/input-stream has been disturbed by the user.
  //                                 // getchar() obtains the next character from the input stream as ascii form.
  //   putchar(c);
  // }

  printf("int c: %d\n", getchar() != EOF);  // int c: 1 <- true when some character inserted | != EOF
                                            // int c: 0 <- false when no character inserted | == EOF
                                            // boolean matter
                                            // c = getchar() != EOF;

  return 0;
}