/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaro <alvaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:36:15 by alvaro            #+#    #+#             */
/*   Updated: 2023/11/19 19:43:49 by alvaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	check_clues(char ***arr, int **clues, int dim)
{
	int i;

    i = 0;
	while (i < dim)
	{
		check_top(arr, i, clues[0][i]+1, dim+1);
		check_bottom(arr, i, clues[1][i]+1, dim+1);
		check_left(arr, i, clues[2][i]+1, dim+1);
		check_right(arr, i, clues[3][i]+1, dim+1);
		i++;
	}
}

void	check_top(char ***arr, int col, int clue, int dim)
{
	int i;

    i = -1;
    if(clue-1 == 1)
    {
        arr[i][col] = set_num(dim);
        while(i++ < dim-2)
            delete_pos(arr[i][col], dim-1);
    }
    else if(clue == dim)
    {
        while(++i< dim-1)
            arr[i][col] = set_num(i+1);
    }
    else
    {
        while((--clue) > 0 && (--dim) > 0)
        {
            i = 0;
            while(++i < clue-1)
                delete_pos(arr[i][col], dim);
        }
    }
}

void	check_bottom(char ***arr, int col, int clue, int dim)
{
	int i;

    i = dim-1;
    if(clue-1 == 1)
    {
        arr[i - 1][col] = set_num(dim - 1);
        while(--i >= 0)
            delete_pos(arr[i][col], dim-1);
    }
    else if(clue == dim)
    {
        while(--i >= 0)
            arr[i][col] = set_num(dim-1-i);
    }
    else
    {
        while((--clue) > 0 && (--dim) > 0)
        {
            i = dim;
            while(--i < dim-clue)
                delete_pos(arr[i][col], dim);
        }
    }
}

void	check_left(char ***arr, int row, int clue, int dim)
{
	int i;

    i = -1;
    if(clue-1 == 1)
    {
        arr[row][i] = set_num(dim);
        while(i++ < dim-2)
            delete_pos(arr[row][i], dim-1);
    }
    else if(clue == dim)
    {
        while(++i< dim-1)
            arr[row][i] = set_num(i+1);
    }
    else
    {
        while((--clue) > 0 && (--dim) > 0)
        {
            i = 0;
            while(++i < clue-1)
                delete_pos(arr[row][i], dim);
        }
    }
}

void	check_right(char ***arr, int row, int clue, int dim)
{
	int i;

    i = dim-1;
    if(clue-1 == 1)
    {
        arr[row][i - 1] = set_num(dim - 1);
        while(--i >= 0)
            delete_pos(arr[row][i], dim-1);
    }
    else if(clue == dim)
    {
        while(--i >= 0)
            arr[row][i] = set_num(dim-1-i);
    }
    else
    {
        while((--clue) > 0 && (--dim) > 0)
        {
            i = dim;
            while(--i < dim-clue)
                delete_pos(arr[row][i], dim);
        }
    }
}