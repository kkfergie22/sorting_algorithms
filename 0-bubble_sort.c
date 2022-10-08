#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* bubble_sort - function to sort an integer array in
* ascending order
*
* @array: the input array
* @size: size of the array
*
* Return: always nothing
*/

void bubble_sort(int *array, size_t size)
{
int swap_variable;
size_t i, j;

for (i = 0; i < size - 1; ++i)
{
for (j = 0; j < size - i - 1; ++j)
{
if (array[j] > array[j + 1])
{
swap_variable = array[j];
array[j] = array[j + 1];
array[j + 1] = swap_variable;
}
}
print_array(array, size);
}
}
