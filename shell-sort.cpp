#include <cstdio>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <string.h>

#include "aux-functions.h"

//--------------------------------------------------------------
void shell_sort(int C[], int tam, int print_ok, int check, int h_sequence){
//--------------------------------------------------------------
    clock_t start_clock, end_clock;
    start_clock = clock();
    long changes = 0;
    char name[20];
    int i, j, chave;
    int h = 1, div_fact;

    if (print_ok) {
        printf ("Array before: \n");
        print_array(C, tam);
    }

    switch (h_sequence){
    case SHELL:
        while (h < tam) h = h*2;
        div_fact = 2;
        strcpy(name, "SHELL");
        break;
    case KNUTH:
        while (h < tam) h = 3*h+1;
        div_fact = 3;
        strcpy(name, "KNUTH");
        break;
    case CIURA:
        strcpy(name, "CIURA");
        break;
    case PRIMES:
        strcpy(name, "PRIMES");
        break;
    default:
        break;
    }
    while (h > 1) {
        h /= div_fact;
        for(i = h; i < tam; i++) {
            chave = C[i];
            j = i - h;
            while (j >= 0 && chave < C[j]) {
                C [j+h] = C[j];
                changes++;
                j -= h;
                //if (j<h) break;
            }
            C [j+h] = chave;
            //print_array(C, tam);
        }
    }
    end_clock = clock();

    if (check)
        check_correctness(C, tam);
    
    if (print_ok) {
        printf ("\nArray after: \n");
        print_array(C, tam);
    }
    
    printf("%s,%d,%ld,%f\n", name, tam, changes, (end_clock - start_clock)/(double)CLOCKS_PER_SEC);
}
