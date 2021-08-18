#include <cstdio>
#include <cstdlib>
#include <string>
#include <algorithm>

#include "aux-functions.h"

//--------------------------------------------------------------
void small_test(int h_sequence) {
//--------------------------------------------------------------
    int arr1[10] = {12,2,5,4,8,7,6,9,1,15};
    int arr2[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr3[10] = {10,9,8,7,6,5,4,3,2,1};
    
    switch (h_sequence) {
        case SHELL:
            shell_sort(arr1, 10, 1, 1);
            shell_sort(arr2, 10, 1, 1);
            shell_sort(arr3, 10, 1, 1);
            break;
        case KNUTH:
            //shell_sort(arr1, 10, 1, 1);
            //shell_sort(arr2, 10, 1, 1);
            //shell_sort(arr3, 10, 1, 1);
            break;
        case CIURA:
            //shell_sort(arr1, 10, 1, 1);
            //shell_sort(arr2, 10, 1, 1);
            //shell_sort(arr3, 10, 1, 1);
            break;
        case PRIMES:
            //shell_sort(arr1, 10, 1, 1);
            //shell_sort(arr2, 10, 1, 1);
            //shell_sort(arr3, 10, 1, 1);
            break;
    }
}

//--------------------------------------------------------------
void large_test(int h_sequence, int type_elements, int size) {
//--------------------------------------------------------------
    int arr[size];
 
    switch (type_elements) {
        case ELEMENTS_CRESCENT: for (int i=0; i<size; i++) arr[i] = i; break;
        case ELEMENTS_DECRESCENT: for (int i=0; i<size; i++) arr[i] = size-i; break;
        case ELEMENTS_RANDOM: for (int i=0; i<size; i++) arr[i] = rand() % size+1; break;
    }
    
    switch (h_sequence) {
        case SHELL: shell_sort(arr, size, 0, 1); break;
        case KNUTH: shell_sort(arr, size, 0, 1); break;
        case CIURA: shell_sort(arr, size, 0, 1); break;
        case PRIMES: shell_sort(arr, size, 0, 1); break;
        default: printf("Unexepected h sequence");
    }
}

//--------------------------------------------------------------
void individual_tests(int h_sequence, int type_elements, int size) {
//--------------------------------------------------------------
    large_test(h_sequence, type_elements, size);
}

//--------------------------------------------------------------
void scale_tests(int h_sequence, int type_elements, int start_size, int number_cases) {
//--------------------------------------------------------------

    int size = start_size;
    
    for (int i=0; i<number_cases; i++) {
        large_test(h_sequence, type_elements, size);
        size *= 10;
    }
}

