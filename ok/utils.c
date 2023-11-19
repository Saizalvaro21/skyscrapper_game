/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:40:14 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/19 14:44:16 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putcell(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_args(char *arg)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (arg[i])
	{
		if (arg[i] >= '1' && arg[i] <= '9')
		{
			count++;
			i++;
		}
		else
			return (-1);
		if (arg[i] != ' ')
			return (-1);
		else if (arg[i] == '\0')
			break ;
		i++;
	}
	if (count % 4 != 0)
		return (-1);
	return (count / 4);
}

int	ft_err(int err_code)
{
	if (err_code == 1)
		write(1, "ERROR: Memory Allocation Failed!\n", 34);
	else if (err_code == 2)
	{
		write(1, "ERROR: Input invalid!\n", 23);
	}
	return (err_code);
}
