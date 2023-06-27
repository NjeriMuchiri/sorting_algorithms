#include "sort.h"
/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the quick sort algorithm
 * @array: array of integers to sort
 * @size: size of the array
 * Return: no return
*/
void quick_sort(int *array, size_t size)
{
_quiksort(array, 0, size - 1, size);
}
/**
 * _quiksort - auxiliar function for the
 * quick_sort function
 * @a: input arrray
 * @low: index for the first element
 * @high: index for the last element
 * @size: size of the array
 * Return: no return
 */
void _quiksort(int *a, int low, int high, int size)
{
int p, w, i;
int tmp;
if (low < high)
{
p = high;
w = low;
for (i = low; i < high; i++)
{
if (a[i] < a[p])
{
if (i != w)
{
tmp = a[i];
a[i] = a[w];
a[w] = tmp;
print_array(a, size);
}
w++;
}
}
if (w != p && a[w] != a[p])
{
tmp = a[w];
a[w] = a[p];
a[p] = tmp;
print_array(a, size);
}
_quiksort(a, low, w - 1, size);
_quiksort(a, w + 1, high, size);
}
}
