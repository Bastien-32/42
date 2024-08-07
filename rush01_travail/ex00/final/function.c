/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:44:34 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/28 19:09:45 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <unistd.h>
#include <stdlib.h>

int	chartoint(char c)
{
	return (c - 48);
}

int	inttochar(char c)
{
	return (c + 48);
}

void	check(int argc, char **argv)

{
	int	count;
	int	x;

	x = 0;
	count = 0;
	if (argc > 2)
	{
		write (1, "Error\n", 7);
		exit (0);
	}
	while (argv[1][x])
	{
		count++;
		x++;
	}
	if (count > 32 || count < 31)
	{
		write(1, "Error\n", 7);
		exit (0);
	}
	check_line(argv, count);
}

void	check_line(char **argv, int count)

{
	int	x;
	int	val;

	x = 0;
	while (x < count)
	{
		val = argv[1][x + 8] + argv[1][x] - '0';
		if (val > '5' && x <= count - 8)
		{
			write (1, "Error\n", 7);
			exit (0);
		}
		x += 2;
	}
	x = 0;
	while (argv[1][x])
	{
		if (((argv[1][x]) > '4' || (argv[1][x]) < '1') && (argv[1][x] != ' '))
		{
			write(1, "Error\n", 7);
			exit (0);
		}
		x++;
	}
}

void	test(char **tab)

{
	char	c;
	int		i;
	int		j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			c = inttochar(tab[i][j]);
			write(1, &c, 1);
			if (j < 5)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
