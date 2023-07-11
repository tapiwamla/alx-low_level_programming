#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to 2D array
 * @width: width input
 * @height: height input
 * Return: pointer to 2D array
 */
 
int **alloc_grid(int width, int height)
{
int **myarr;
int i;
int j;

if (width <= 0 || height <= 0)
{
return (NULL);
}

myarr = malloc(sizeof(int *) * height);

if (myarr == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
myarr[i] = malloc(sizeof(int) * width);

if (myarr[i] == NULL)
{
for (; i >= 0; i--)
free(myarr[i]);
free(myarr);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
myarr[i][j] = 0;
}

return (myarr);
}
