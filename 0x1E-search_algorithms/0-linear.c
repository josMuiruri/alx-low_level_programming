#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 * 
 * return: Always EXIT_SUCCESS
 * /
int linear_search(int *array, size_t size, int value);{
    for(i = 0; i < n; i++){
        if(array[i] == value]{
            return 1;
        }
    }
    return -1;
}
int main(){
    int array[i] = {1, 2, 5, 7, 9, -3, -1};
    int n = sizeof(array) / sizeof(array[0]);
    int value = 1;
    int result = linearSearch(array, n, value);
    printf("Found %d at index: %d\n\n", 1, linear_search(array, size, 1));
    printf("Found %d at index: %d\n\n", 7, linear_search(array, size, 7));
    printf("Found %d at index: %d\n\n", -1, linear_search(array, size, -1));
    return(EXIT_SUCCESS);
    }