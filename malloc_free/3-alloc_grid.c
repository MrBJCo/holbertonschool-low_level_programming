#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height);
{
	int **array
		array = malloc(nrows * sizeof(int *));
	if(array == NULL)
	{
		fprintf(stderr, "out of memory\n");
		exit or return
	}
	for(i = 0; i < nrows; i++)
	{
		array[i] = malloc(ncolumns * sizeof(int));
		if(array[i] == NULL)
		{
			fprintf(stderr, "out of memory\n");
			exit or return
		}
	}
}
