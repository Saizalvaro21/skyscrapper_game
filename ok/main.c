int main(int argc, char *argv[])
{
	char    ***arr;
	int     **clues;
	int		dim;
	int		i;

	if (argc != 2)
		return (ft_err(2));

	dim = get_dim(argv[1]);
	arr = init_arr(dim);
	clues = init_clues(dim, argv[1]);
}

int solved(char ***arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while(arr[i][j])
		{
			if (arr[i][j][1] != '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	impossible(char ***arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while(arr[i][j])
		{
			if (arr[i][j][0] == '\0')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_multi_sol(char ***arr)
{

}