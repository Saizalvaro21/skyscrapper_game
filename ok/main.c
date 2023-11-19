/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:20:28 by alvaro            #+#    #+#             */
/*   Updated: 2023/11/19 20:58:44 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int main(int argc, char *argv[])
{
	char    ***arr;
	int     **clues;
	int		dim;

	if (argc != 2)
		return (ft_err(2));
	dim = get_dim(argv[1]);
	if (dim == -1)
		return (ft_err(2));
	arr = init_arr(dim);
	clues = init_clues(dim, argv[1]);
	if (arr == NULL || clues == NULL)
		return (-1);
	check_clues(arr, clues, dim);
	while(!solved(arr) && !impossible(arr))
	{
		check_sudoku(arr, dim);
		print_arr(arr, dim);
		if(check_multi_sol(arr)){
			//
		}
	}
	print_arr(arr, dim);
	ft_free_clues(clues);
	ft_free_arr(arr);
	return(0);
}

int	check_multi_sol(char ***arr)
{
	if (arr)
		return (0);
	return (0);
}

int solved(char ***arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while(arr[i][j])
		{
			if (arr[i][j][1] != '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	impossible(char ***arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while(arr[i][j])
		{
			if (arr[i][j][0] == '\0')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	check_multi_sol(char ***arr)
{

}
*/