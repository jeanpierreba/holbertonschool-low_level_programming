#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of integers
* using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: index where value is located, otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
	int minimum = 0, maximum = size - 1, middle;

	if (array == NULL)
		return (-1);

	while (minimum <= maximum)
	{
		printf("Searching in array: ");
		array_print(array, minimum, maximum);
		middle = (minimum + maximum) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			minimum = middle + 1;
		else
			maximum = middle - 1;
	}
	return (-1);
}

/**
* array_print - print an array of integers
* @array: array to print
* @minimum: low bound index
* @maximum: high bound index
*/
void array_print(int *array, int minimum, int maximum)
{
	int i = minimum;

	while (i < maximum)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n",array[i]);
}
