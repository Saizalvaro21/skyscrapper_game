/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:13:28 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/19 20:57:54 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	check_row(char	***arr, int	col, char num, int dim)
{
    int i;

	i = 0;
    while(i < dim)
    {
		if (arr[col][i][1] != '\0')
    		delete_pos(arr[col][i], num);
        i++;
    }
}

void	check_col(char	***arr, int	row, char num, int dim)
{
	int i;

	i = 0;
    while(i < dim)
    {
		if (arr[i][row][1] != '\0')
        	delete_pos(arr[i][row], num);
        i++;
    }
}

void	check_sudoku(char ***arr, int dim)
{
	int	i;
	int	j;

	i = 0;
	while(i < dim)
	{
		j = 0;
		while(j < dim)
		{
			if(arr[i][j][1] == '\0')
			{
				check_col(arr, j, *arr[i][j], dim);
				check_row(arr, i, *arr[i][j], dim);
			}
			j++;
		}
		i++;
	}
}