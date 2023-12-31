/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cell.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:36:21 by alvaro            #+#    #+#             */
/*   Updated: 2023/11/19 20:39:44 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	print_arr(char ***arr, int dim)
{
	int	i;
	int	j;

	i = 0;
	while(i < dim)
	{
		j = 0;
		while(j < dim)
		{
			ft_putcell(arr[i][j][0]);
			j++;
		}
		i++;
		ft_putcell('\n');
	}
}

void	init_cell(char *cell, int dim)
{
	int	i;

	i = 0;
	while (i < dim)
	{
		cell[i] = i + '1';
		i++;
	}
}