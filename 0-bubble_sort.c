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
size_t iterator, i;

for (iterator = 0; iterator < size - 1; ++iterator)
{
/*Loop through and compare elements*/
for (i = 0; i < size - (iterator - 1); ++i)
{
/*change > to < for descending order*/
if (array[i] > array[i + 1])
{
swap_variable = array[i];
array[i] = array[i + 1];
array[i + 1] = swap_variable;
}
}
}
}
