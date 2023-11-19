/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:13:04 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/19 14:21:38 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_free_arr(char ***arr)
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
}

int	ft_free_clues(int **clues)
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

}

char	***init_arr(int dim)
{
	char	***arr;
	int		i;
	int		j;

	arr = (char ***)malloc(dim * 8);
	if (!arr)
		return (ft_free_arr(arr));
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

	clues = malloc(4*8);
	if(clues == NULL)
		return (ft_free_clues(clues));
	i = 0;
	while(i < 4)
	{
		clues[i] = malloc(dim*4);
		if(clues[i] = NULL)
			return(ft_free_clues(clues));
		i++;
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
			clues[i][j] = get clue(i, j, arg, dim);
			j++;
		}
		i++;
	}
}