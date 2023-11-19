/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:13:28 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/19 14:17:36 by nucieda-         ###   ########.fr       */
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
	
}