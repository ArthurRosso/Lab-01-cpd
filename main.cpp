#include "aux-functions.h"

int main(int argc, char *argv[]) {
	FILE *fptr;
	int num_elements;
	int *arr;

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



	 if (argc != 2) {
        printf ("Número incorreto de parametros.");
        return 1;
    }

    if ((fptr = fopen(argv[1], "r")) == NULL) {
        printf("erro ao abrir arquivo %s\n", argv[1]);
        return 1;
    }


	
	while(1) {
		if(fscanf(fptr, "%d ", &num_elements) == EOF) break;
		arr = (int*) malloc(num_elements * sizeof(int));
		for(int i = 0; i < num_elements; i++)
			fscanf(fptr, "%d", &arr[i]);

		print_array(arr, num_elements);
		putchar('\n');
		free(arr);
	}

    int arr1[10] = {12,2,5,4,8,7,6,9,1,15};
    int arr2[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr3[10] = {10,9,8,7,6,5,4,3,2,1};
    
    //shell_sort(arr1, 10, 1, 1, SHELL);

    return 0;
}
