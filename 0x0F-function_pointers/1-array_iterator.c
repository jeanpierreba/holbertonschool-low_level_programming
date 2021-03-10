#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter
 * @array: array
 * @size: size of the array
 * @action: function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != '\0' && array != '\0' && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
