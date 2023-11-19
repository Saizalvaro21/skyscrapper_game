#include "arr_func.h"

int power(int base, int exp){
    if(exp == 0) return 1;
    if( exp < 0) return 0;
    return (power(base, exp-1)*base);
}

int ft_strlen(char *str);

void	ft_putnbr(int num)
{
	char	n;

	n = num + '0';
	write(1, &n, 1);
}

int initial_value(int dim)
{
	return(power(2, dim+1)-1);
}

void	set_arr(__uint16_t **arr)
{
	int	col;
	int	row;

	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
            //esto está mal inicializado y fata reservar memoria
			arr[col][row] = initial_value(DIM);
			row++;
		}
		col++;
	}
}

void	print_arr(__uint16_t **arr)
{
	int	col;
	int	row;

	col = 0;
	while (col < DIM)
	{
		row = 0;
		while (row < DIM)
		{
			ft_putnbr((arr[col][row]/1024));
			row++;
		}
		write(1, "\n", 1);
		col++;
	}
}

int solved(__uint16_t **board)
{
	int i;
	int j;

	i = 0;
	while(i < DIM)
	{
		j = 0;
		while(j < DIM)
		{
			if(board[i][j]/512 == 0)
				return(0); // Not solved
			j++;
		}
		i++;
	}
	return 1; // Solved
}