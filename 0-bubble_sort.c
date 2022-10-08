#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
  int swap_variable;
  size_t iterator, i;

  for (iterator = 0; iterator < size - 1; ++iterator)
  {
    for (i = 0; i < size - (iterator - 1); ++i)
    {
      if (array[i] > array[i + 1])
      {
        swap_variable = array[i];
        array[i] = array[i + 1];
        array[i + 1] = swap_variable;
      }
    }
  }
}
