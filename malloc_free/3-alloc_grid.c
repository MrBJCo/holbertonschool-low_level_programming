#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height);
{
    int **array;
    array = malloc(nrows * sizeof(int *));
    for(i = 0; i < nrows; i++)
    {
        array[i] = malloc(ncolumns * sizeof(int));
    }
}
