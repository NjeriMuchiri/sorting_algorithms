#include "sort.h"
/**
 * bubble-sort - function that sorts an array
 * of integers in ascending order using
 * bubble sorting algorithm
 * @array: array inputs
 * @size: The array size
 * Return: no return
*/
void bubble_sort(int *array, size_t size)
{
size_t i, n;
int tmp, swaps;
for (n = size, swaps = 1; n > 0 && swaps; n--)
{
swaps = 0;
for (i = 0; (i + 1) < n; i++)
{
if (array[i] > array[i + 1])
{
tmp = array[i + 1];
array[i + 1] = array[i];
array[i] = tmp;
print_array(array, size);
swaps = 1;
}
}
}
}
