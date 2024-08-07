/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:45:11 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/28 19:07:31 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush.h"

void	allocatetab(int rows, int cols, t_rush *rush)
{
	int	i;

	i = 0;
	rush->tab = (char **)malloc(rows * sizeof(char *));
	while (i < rows)
	{
		rush->tab[i] = malloc(cols * sizeof(char));
		i++;
	}
}

void	init(int rows, int cols, t_rush *rush)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < rows)
	{
		while (j < cols)
		{
			rush->tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	fill(char **tab, char *exo, t_rush *rush)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	if (!rush->tab || !tab || !exo)
		return ;
	while (j < 6)
	{
		while (exo[i] && i < 32)
		{
			c = chartoint(exo[i]);
			if (i < 8)
				rush->tab[0][1 + i / 2] = c;
			else if (i >= 8 && i < 16)
				rush->tab[5][1 + (i - 8) / 2] = c;
			else if (i >= 16 && i < 24)
				rush->tab[1 + (i - 16) / 2][0] = c;
			else if (i >= 24 && i < 32)
				rush->tab[1 + (i - 24) / 2][5] = c;
			i += 2;
		}
		j++;
	}
}

void	drawn(char **tab)
{
	char	c;
	int		i;
	int		disp;
	int		j;

	j = 1;
	i = 0;
	disp = 1;
	if (disp == 1)
		test(tab);
	else
	{
		while (i++ < 6 - 2)
		{
			while (j < 6 - 1)
			{
				c = inttochar(tab[i][j]);
				write(1, &c, 1);
				if (j < 6 - 1)
					write(1, " ", 1);
				j++;
			}
			write(1, "\n", 1);
		}
	}
}

int	main(int argc, char **argv)
{
	int	rows;
	int	cols;

	rows = 6;
	cols = 6;
	t_rush (rush);
	check(argc, argv);
	allocatetab(rows, cols, &rush);
	init(rows, cols, &rush);
	fill(rush.tab, argv[1], &rush);
	execut_col(rush.tab);
	execut_row(rush.tab);
	drawn(rush.tab);
	return (0);
}
