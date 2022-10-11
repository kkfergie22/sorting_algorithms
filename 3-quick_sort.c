#include "sort.h"

/**
* swap_bubble - function to swap/sort.
*@a: to be sorted.
*@b: to be sorted.
* Return: void.
*/
void swap(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

/**
* lomuto_partition - function to sort using Lomuto scheme.
*@array: array to be sorted.
*@size: size of array.
*@low: divider/partition.
*@high: divider/partition.
* Return: partition.
*/
int lomuto_partition(int *array, size_t size, int low, int high)
{
int *pivot, high1, low1;

pivot = array + high;
for (high1 = low1 = low; low1 < high; low1++)
{
if (array[low1] < *pivot)
{
if (high1 < low1)
{
swap(array + low1, array + high1);
print_array(array, size);
}
high1++;
}
}

if (array[high1] > *pivot)
{
swap(array + high1, pivot);
print_array(array, size);
}
return (high1);
}

/**
* quickpart_sort - recursion function to call partition sort
*@array: array to be sorted.
*@size: size of array.
*@low: partition divider.
*@high: partition divider.
* Return: void.
*/
void quickpart_sort(int *array, size_t size, int low, int high)
{
int part;

if (high - low > 0)
{
part = partition(array, size, low, high);
quickpart_sort(array, size, low, part - 1);
quickpart_sort(array, size, part + 1, high);
}
}

/**
* quick_sort - quick sort function for array.
*@array: array to be sorted.
*@size: size to be sorted.
* Return: void.
*/
void quick_sort(int *array, size_t size)
{
partition_sort(array, size, 0, size - 1);
}
