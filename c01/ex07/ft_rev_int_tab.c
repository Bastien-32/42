/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:35:06 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/22 11:03:37 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
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
	int tab [] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_rev_int_tab(tab, size);
	while (i < size)
	{ 
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return(0);
}
*/
