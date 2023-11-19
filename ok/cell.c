#include "rush01.h"

void	delete_pos(char *cell, char	pos)
{
	int	i;

	i = 0;
	while(cell[i])
	{
		if (cell[i] == pos)
		{
			cell[i] = cell[ft_strlen(cell) - 1];
			cell[ft_strlen(cell) - 1] = '\0';
		}
		i++;
	}
}

void	init_pos(char *cell, int dim)
{
	int	i;

	i = 0;
	while (i < dim)
	{
		cell[i] = i + '1';
	}
}

char	*set_num(char num)
{
	char	*final;

	final = malloc(2);
	final[0] = num;
	final[1] = '\0';

	return (final);
}