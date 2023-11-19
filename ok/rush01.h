#ifndef RUSH01
# define RUSH01

# include <unistd.h>
# include <stdlib.h>
	/*main*/
	int solved(char ***arr);
	int	impossible(char ***arr);
	int	check_multi_sol(char ***arr);


	/*cell*/
	void	delete_pos(char *cell, char	pos);
	void	init_pos(char *cell, int dim);
	char	*set_num(char num);
	void	print_arr(char ***arr, int dim);

	/*init*/
	int	ft_free_arr(char ***arr);
	int	ft_free_clues(int **clues);
	char	***init_arr(int dim);
	int	**init_clues(int dim, char *args);

	int get_clue(int x, int y, char *arg);
	/*sudoku*/
	void	check_row(char	***arr, int	col, char num, int dim);
	void	check_col(char	***arr, int	row, char num, int dim);
	void	check_sudoku(char ***arr, int dim);
	/*logic*/
	void	check_clues(char ***arr, int **clues, int dim);
	void	check_top(char ***arr, int col, int clue, int dim);
	void	check_bottom(char ***arr, int col, int clue, int dim);
	void	check_left(char ***arr, int row, int clue, int dim);
	void	check_right(char ***arr, int row, int clue, int dim);

	/*utils*/
	void	ft_putcell(char c);
	int	ft_strlen(char *str);
	int	check_args(char *arg);
	int	ft_err(int err_code);

	// ...

#endif