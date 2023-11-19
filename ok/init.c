/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:13:04 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/19 20:04:18 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

char	***ft_free_arr(char ***arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while(arr[i][j])
		{
			free(arr[i][j]);
			j++;
		}
		free(arr[i]);
		i++;
	}
	free(arr);
	return(NULL);
}

int	**ft_free_clues(int **clues)
{
	int i;

	i = 0;
	while(clues[i] != NULL)
	{
		free(clues[i]);
		i++;
	}
	free(clues);
	return(NULL);
}

int	get_dim(char *args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (args[i])
	{
		if(args[i] >= '1' && args[i] <= '9')
		{
			count++;
			i++;
		}
		else
			return(ft_err(2));
		if (args[i] == ' ')
			i++;
		else if (args[i] == '\0')
			break ;
		else
			return (ft_err(2));
	}
	if (count % 4 != 0)
		return (ft_err(2));
	return (count / 4);
}

char	***init_arr(int dim)
{
	char	***arr;
	int		i;
	int		j;

	arr = (char ***)malloc(dim * 8);
	if (!arr)
		ft_free_arr(arr);
	i = 0;
	while (i < dim)
	{
		j = 0;
		arr[i] = (char **)malloc(dim * 8);
		if (!arr[i])
			return (ft_free_arr(arr));
		while (j < dim)
		{
			arr[i][j] = (char *)malloc(dim);
			if (!arr[i][j])
				return (ft_free_arr(arr));
			j++;
		}
		i++;
	}
	return (arr);
}

int	**init_clues(int dim, char *args)
{
	int **clues;
	int i;
	int j;

	clues = malloc(4 * 8);
	if(clues == NULL)
		return (ft_free_clues(clues));
	i = 0;
	while(i < 4)
	{
		clues[i] = malloc(dim*4);
		if(clues[i] == NULL)
			return(ft_free_clues(clues));
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < dim)
			clues[i][j] = get_clue(i, j, args, dim);
	}
	return(clues);
}

int get_clue(int x, int y, char *arg, int dim)
{
	int col;
	int row;

	col = y * 2; 
	row = x * (dim * 2);
	return(arg[col + row] - '0');
}

void read_clues(char *arg, int dim, int **clues)
{
	int i;
	int j;

	while(i < 4)
	{
		while(j < dim)
		{
			clues[i][j] = get_clue(i, j, arg, dim);
			j++;
		}
		i++;
	}
}