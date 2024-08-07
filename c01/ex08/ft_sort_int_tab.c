/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:50:21 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/22 11:13:14 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
				j++;
			}
			else
				j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int		main(void)
{
	int i;
	int size;
	
	size = 10;
	i = 0;
	int tab [] = {8, 2, 5, 7, 5, 1, 9, 6, 4, 0};

	ft_sort_int_tab(tab, size);
	while (i < size)
	{ 
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return(0);
}
*/
