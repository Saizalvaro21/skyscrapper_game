void	check_clues(char ***arr, int **clues, int dim)
{
	int i;

    i = 0;
	while (i < dim)
	{
		check_top(arr, i, clues[0][i], dim);
		check_bottom(arr, i, clues[1][i], dim);
		check_left(arr, i, clues[2][i], dim);
		check_right(arr, i, clues[3][i], dim);
		i++;
	}
}

void	check_top(char ***arr, int col, int clue, int dim)
{
	// Mirar una columna y ver que hacer (si algo)
}

void	check_bottom(char ***arr, int col, int clue, int dim)
{
	
}

void	check_left(char ***arr, int row, int clue, int dim)
{
	
}

void	check_right(char ***arr, int row, int clue, int dim)
{
	
}