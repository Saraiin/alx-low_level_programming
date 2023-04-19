#include "function_pointers.h"
/**
 * array_iterator - executes a function gvn as prmtr on each elmt of array
 * @size: size of array
 * @array: array to execute function on
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
		while (size--)
			action(*(array++));
}
