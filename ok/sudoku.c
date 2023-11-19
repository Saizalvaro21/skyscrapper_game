/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaro <alvaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:13:28 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/19 19:01:33 by alvaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	check_row(char	***arr, int	col, char num, int dim)
{
    int j;

	j = 0;
    while(j < dim)
    {
        delete_pos(arr[col][j], num);
        j++;
    }
}

void	check_col(char	***arr, int	row, char num, int dim)
{
	int i;

	i = 0;
    while(i < dim)
    {
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
		while(j < 9)
		{
			if(arr[i][j][1] == '\0' && *arr[i][j] >= '1' && *arr[i][j] <= ('0'+dim))
			{
				check_col(arr, j, *arr[i][j], dim);
				check_row(arr, i, *arr[i][j], dim);
			}
		}
	}
}