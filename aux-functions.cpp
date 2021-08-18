#include <cstdio>
#include <cstdlib>

//--------------------------------------------------------------
void print_array(int C[], int tam) {
//--------------------------------------------------------------
    printf ("[");
  for (int i=0; i<tam-1; i++) {
    printf("%d, ", C[i]);
  }
  printf ("%d]\n", C[tam-1]);
}


//--------------------------------------------------------------
void check_correctness (int C[], int tam) {
//--------------------------------------------------------------
  for (int i=0; i<tam-1; i++) {
      if (C[i]>C[i+1]) {
          printf ("\n***** INCORRECT ORDERING *****");
          return;
      }
  }
}

