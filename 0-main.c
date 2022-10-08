#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int array[] = {38, 97, 5, 42, 15, 62, 77, 25, 10, 91, 23, 54, 14, 49, 36, 12, 95, 78, 1, 47, 30, 89, 46, 90, 21, 82, 50};
  size_t n = sizeof(array) / sizeof(array[0]);

  print_array(array, n);
  printf("\n");
  bubble_sort(array, n);
  printf("\n");
  print_array(array, n);
  return (0);
}
