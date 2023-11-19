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
        set_nbr(arr[i][col], dim);
        while(i++ < dim-2)
            delete_posibility(arr[i][col], dim-1);
    }
    else if(clue == dim)
    {
        while(++i< dim-1)
            set_nbr(arr[i][col], i+1);
    }
    else
    {
        while((--clue) > 0 && (--dim) > 0)
        {
            i = 0;
            while(++i < clue-1)
                delete_posibility(arr[i][col], dim);
        }
    }
}

void	check_bottom(char ***arr, int col, int clue, int dim)
{
	int i;

    i = dim-1;
    if(clue-1 == 1)
    {
        set_nbr(arr[i - 1][col], dim - 1);
        while(--i >= 0)
            delete_posibility(arr[i][col], dim-1);
    }
    else if(clue == dim)
    {
        while(--i >= 0)
            set_nbr(arr[i][col], dim-1-i);
    }
    else
    {
        while((--clue) > 0 && (--dim) > 0)
        {
            i = dim;
            while(--i < dim-clue)
                delete_posibility(arr[i][col], dim);
        }
    }
}

void	check_left(char ***arr, int row, int clue, int dim)
{
	int i;

    i = -1;
    if(clue-1 == 1)
    {
        set_nbr(arr[row][i], dim);
        while(i++ < dim-2)
            delete_posibility(arr[row][i], dim-1);
    }
    else if(clue == dim)
    {
        while(++i< dim-1)
            set_nbr(arr[row][i], i+1);
    }
    else
    {
        while((--clue) > 0 && (--dim) > 0)
        {
            i = 0;
            while(++i < clue-1)
                delete_posibility(arr[row][i], dim);
        }
    }
}

void	check_right(char ***arr, int row, int clue, int dim)
{
	int i;

    i = dim-1;
    if(clue-1 == 1)
    {
        set_nbr(arr[row][i - 1], dim - 1);
        while(--i >= 0)
            delete_posibility(arr[row][i], dim-1);
    }
    else if(clue == dim)
    {
        while(--i >= 0)
            set_nbr(arr[row][i], dim-1-i);
    }
    else
    {
        while((--clue) > 0 && (--dim) > 0)
        {
            i = dim;
            while(--i < dim-clue)
                delete_posibility(arr[row][i], dim);
        }
    }
}