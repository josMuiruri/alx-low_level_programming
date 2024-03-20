#include <stdio.h>

/**
 * main - Entry point
 * 
 * return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value){
    if (array == NULL)
        return -1;

    for(size_t i = 0; i < size; i++){
        printf("comparing %d\n", array[i]);
        if (array[i] == value){
            return i;
        }
    }
    return -1;
}
int main(){
    int array[] = {1, 2, 5, 7, 9, -3, -1};
    int size = sizeof(array) / sizeof(array[0]);
    int value = 1;
    int result = linear_search(array, size, value);

    if (result != -1)
        printf("Value %d found at index %d\n", value, result);
    else 
        printf("Value %d not found in the array\n", value);
    return 0;
    }