#include "function_pointers.h"

/**
  * int_index - Entry point
  *
  * Description: Write a a function that searches for an integer
  *
  * @array: array to execute function om
  * @size: is the size of the array
  * @cmp: is the pointer to the function you need to use
  *
  * Return: ...
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
