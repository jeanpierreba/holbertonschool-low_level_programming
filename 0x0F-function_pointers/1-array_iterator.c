#include "function_pointers.h"

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
