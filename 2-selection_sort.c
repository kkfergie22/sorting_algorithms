#include <stdio.h>
#include "sort.h"

/**
* swap - function to swap two integers
*
* @a: first variable
* @b: second variable
*/
void swap(int *a, int *b)
{
int holding_variable = *a;
*a = *b;
*b = holding_variable;
}

/**
* selection_sort - function to sort using the selection
* sort algorithm
*
* @array: the array passsed to the function
* @size: size of the array
*
* Return: nothing
*/
void selection_sort(int *array, size_t size)
{
size_t j, i;

for (j = 0; j < size - 1; j++)
{
int minimum = j;
for (i = j + 1; i < size; i++)
{
if (array[i] < array[minimum])
minimum = i;
}

swap(&array[minimum], &array[j]);
print_array(array, size);
}
}
