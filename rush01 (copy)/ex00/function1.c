/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:44:09 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/28 18:50:25 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	execut_col(char **tab)
{
	int	x;
	int	y;
	int	result;
	int	i;

	x = 1;
	y = 0;
	result = 0;
	while (tab[x])
	{
		if (tab[y][x] == 1)
			tab[1][x] = 4;
		if (tab[4 + 1][x] == 1)
			tab[4][x] = 4;
		if (tab[y][x] == 4)
		{
			i = 1;
			while (i < 4)
			{
				tab[i][x] = i;
				i++;
			}
			i = 0;
		}
		if (tab[4 + 1][x] == 4)
		{
			i = 4;
			while (i > 0)
			{
				tab[i][x] = i;
				i--;
			}
			i = 0;
		}
		if (tab[y][x] == 1 && tab[4 + 1][x] == 2)
			tab[4][x] = 4 - 1;
		if (tab[y][x] == 2 && tab[4 + 1][x] == 1)
			tab[1][x] = 4 - 1;
		if (tab[y][x] == 2 && tab[4 + 1][x] == 4 - 1)
			tab[2][x] = 4;
		if (tab[4 + 1][x] == 2 && tab[y][x] == 4 - 1)
			tab[4 - 1][x] = 4;
		x++;
	}
	y = 1;
	result = 0;
	i = 0;
	while (tab[x] && x < 5)
	{
		x = 1;
		while (y < 5)
		{
			if (tab[x][y] != 0)
			{
				result = result + tab[x][y];
				i++;
				y++;
			}
			else
				y++;
		}
		x = 1;
		while (i > 2 && x < 5)
		{
			if (tab[x][y] == 0)
			{
				tab[x][y] = 10 - result;
			}
			else
				y++;
		}
		i = 0;
		result = 0;
		x++;
	}
}

void	execut_row(char **tab)
{
	int	x;
	int	y;
	int	i;
	int	result;

	y = 1;
	x = 0;
	while (tab[y])
	{
		if (tab[y][x] == 1)
			tab[y][1] = 4;
		if (tab[y][4 + 1] == 1)
			tab[y][4] = 4;
		if (tab[y][x] == 4)
		{
			i = 1;
			while (i < 4)
			{
				tab[y][i] = i;
				i++;
			}
			i = 0;
		}
		if (tab[y][4 + 1] == 4)
		{
			i = 4;
			while (i > 0)
			{
				tab[y][i] = i;
				i--;
			}
			i = 0;
		}
		if (tab[y][x] == 1 && tab[y][4 + 1] == 2)
			tab[y][4] = 4 - 1;
		if (tab[y][x] == 2 && tab[y][4 + 1] == 2)
			tab[y][1] = 0 + 4 - 1;
		if (tab[y][x] == 2 && tab[y][4 + 1] == 4 - 1)
			tab[y][2] = 4;
		if (tab[y][4 + 1] == 2 && tab[y][x] == 4 - 1)
			tab[y][4 - 1] = 4;
		y++;
	}
	y = 1;
	result = 0;
	i = 0;
	while (tab[y] && y < 5)
	{
		x = 1;
		while (x < 5)
		{
			if (tab[y][x] != 0)
			{
				result = result + tab[y][x];
				i++;
				x++;
			}
			else
				x++;
		}
		x = 1;
		while (i > 2 && x < 5)
		{
			if (tab[y][x] == 0)
			{
				tab[y][x] = 10 - result;
			}
			else
				x++;
		}
		i = 0;
		result = 0;
		y++;
	}
}
