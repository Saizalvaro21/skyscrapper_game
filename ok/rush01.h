#ifndef RUSH01
# define RUSH01

# include <unistd.h>
# include <stdlib.h>

	int solved(char ***arr);
	int	impossible(char ***arr);

	void	delete_pos(char *cell, char	pos);
	void	init_pos(char *cell, int dim);
	char	*set_num(char num);

	int	ft_free_arr(char ***arr);
	int	ft_free_clues(int **clues);
	int	get_dim(char *args);
	char	***init_arr(int dim);
	int	**init_clues(int dim, char *args);

	int get_clue(int x, int y, char *arg);

	void	check_row(char	***arr, int	col, char num, int dim);
	void	check_col(char	***arr, int	row, char num, int dim);
	void	check_sudoku(char ***arr, int dim);

	void	check_clues(char ***arr, int **clues, int dim);
	void	check_top(char ***arr, int col, int clue, int dim);
	void	check_bottom(char ***arr, int col, int clue, int dim);
	void	check_left(char ***arr, int row, int clue, int dim);
	void	check_right(char ***arr, int row, int clue, int dim);


	// ...

#endif