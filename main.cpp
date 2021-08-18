#include "aux-functions.h"

int main() {
    // LARGE TESTS
    int start_size=10000, scale = 4;
    int type_elements =
        //ELEMENTS_CRESCENT;
        //ELEMENTS_DECRESCENT;
        ELEMENTS_RANDOM;
    
    //scale_tests(BUBBLE_SORT, type_elements, start_size, scale);
    //scale_tests(INSERTION_SORT, type_elements, start_size, scale);
    //scale_tests(INSERTION_BINARY_SORT, type_eGlements, start_size, scale);
    //scale_tests(SHELL, type_elements, start_size, scale);

    int arr1[10] = {12,2,5,4,8,7,6,9,1,15};
    int arr2[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr3[10] = {10,9,8,7,6,5,4,3,2,1};
    
    shell_sort(arr1, 10, 1, 1, SHELL);

    return 0;
}
