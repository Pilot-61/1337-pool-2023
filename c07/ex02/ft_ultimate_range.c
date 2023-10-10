#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int *arrayP;

	i = 0;
	size = (max - min);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arrayP = malloc(size * sizeof(int));
	if (arrayP == NULL)
		return (-1);
	while (min < max)
	{
		arrayP[i] = min;
		min++;
		i++;
	}
	*range = arrayP;
	return (size);
}	
