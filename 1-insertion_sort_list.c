#include "sort.h"

/**
 * insertion_sort_list - sorts a DLL of integers in
 * ascending order using the insertion sort
 * algorithm
 *
 * @list: doubly linked list
 * Return: no return
 */
void insertion_sort_list(listint_t **list)
{
    if(!list)
    return;
 for (int i = 1; i < 1000; i++) {
        int key = list[i];
        int j = i - 1;

        while (j >= 0 && list[j] > key) {
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = key;
    }
}

