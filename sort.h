#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void _quiksort(int *a, int low, int high, int size);
void shell_sort(int *array, size_t size);
void _shelsort(int *a, int size, int n);
void swaps_list(listint_t **ptr1, listint_t **ptr2, int n);
void increase_sorting(listint_t **ptr, listint_t **limit, listint_t **list);
void decrease_sorting(listint_t **ptr, listint_t **limit, listint_t **list);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void mersort(int *array, int low, int high, int *buffer);
void merge(int *a, int low, int middle, int high, int *buff);
void print_data(char *msg, int *a, int from, int to);
void heap_sort(int *array, size_t size);
void recursion_heap(int *arr, int i, size_t size, int limit);
void swaps_nums(int *arr, int a, int b);

#endif /*SORT_H*/