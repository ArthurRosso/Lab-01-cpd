#ifndef aux_functions_h
#define aux_functions_h

#include <cstdio>
#include <cstdlib>

#define SHELL 0
#define KNUTH 1
#define CIURA 2
#define PRIMES 3

#define ELEMENTS_CRESCENT    0
#define ELEMENTS_DECRESCENT  1
#define ELEMENTS_RANDOM      2

// aux functions
void print_array(int C[], int tam);
void check_correctness (int C[], int tam);
int binary_search (int C[], int low, int high, int key);

// tests
void small_test(int h_sequence);
void large_test(int h_sequence, int type_elements, int size);
void individual_tests(int h_sequence, int type_elements, int size);
void scale_tests(int h_sequence, int type_elements, int start_size, int number_cases);

// sorting algorithms
void shell_sort(int C[], int tam, int print_ok, int check, int h_sequence);


#endif /* aux_functions_h */
