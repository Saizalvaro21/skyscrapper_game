#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int num)
{
	char	n;

	n = num + '0';
	write(1, &n, 1);
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
			arr[col][row] = 0;
			row++;
		}
		col++;
	}
}

void	print_arr(int **arr)
{
	int	col;
	int	row;

	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			ft_putnbr(arr[col][row]);
			row++;
		}
		write(1, "\n", 1);
		col++;
	}
}