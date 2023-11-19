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
		return (ft_free(arr));
	i = 0;
	while (i < dim)
	{
		j = 0;
		arr[i] = (char **)malloc(dim * 8);
		if (!arr[i])
			return (ft_free(arr));
		while (j < dim)
		{
			arr[i][j] = (char *)malloc(dim);
			if (!arr[i][j])
				return (ft_free(arr));
			j++;
		}
		i++;
	}
	return (arr);
}

char	**init_clues(int dim, char *args)
{
	
}
