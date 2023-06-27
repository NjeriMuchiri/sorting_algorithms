#include "sort.h"
/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the
 * selection sorting algorithm
 * @array: array of integers to be sort
 * @size: the size of the array
 * Return: no return
*/
void selection_sort(int *array, size_t size)
{
size_t i, j, m;
int tmp;
for (i = 0; i < size; i++)
{
m = i;
for (j = i + 1; j < size; j++)
{
if (array[m] > array[j])
m = j;
}
if (i != m)
{
tmp = array[i];
array[i] = array[m];
array[m] = tmp;
print_array(array, size);
}
}
}
