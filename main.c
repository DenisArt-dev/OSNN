#include <stdio.h>
#include "config.nn.h"

// double *getWeith (int *structure, size_t length);

int main(void)
{

    printf("%d\n", config_nn_structure[0]);
    // int nn_structure[4] = {10, 8, 5, 3};

    // double var_I[10] = {0.2, 0.5, 0.9, 0.5, 0.7, 0.3, 0.7, 0.8, 0.1, 0.4};
    // double var_T[3] = {0.1, 0.9, 0.1};
    // double *a = getWeith(&nn_structure[0], sizeof(nn_structure) / sizeof(nn_structure[0]));

    // printf("%.5f", *a);
}

// double *getWeith (int *structure, size_t length)
// {
//     double *result[length - 1];

//     FILE *file;
//     file = fopen(NAME_FILE_WEITH, "r");

//     if (file == NULL && 0) {
// 	printf("Create file for weith... \n");
// 	file = fopen(NAME_FILE_WEITH, "w");
//     } else {

//     }

//     for (size_t i = 0; i < length - 1; i++) {
//  	double arr[*structure];
// 	for (size_t ii = 0; ii < *structure; ii++) {
// 	    arr[ii] = 0.1 + ii;
// 	    printf("-\n");
// 	}
//         structure++;
// 	result[i] = &arr[0];
//     }

//     return result[0];
// }
