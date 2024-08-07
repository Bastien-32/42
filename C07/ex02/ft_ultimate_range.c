/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:32:53 by badal-la          #+#    #+#             */
/*   Updated: 2024/08/01 14:26:49 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (max - min);
}
/*
void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	if (nb < 0)
	{
		nb = - nb;
		write(1, "-", 1);
	}
	if (nb > 9)
		ft_putnbr( nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);	
}

#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*range;

	min = 12;
	max = 24;
	ft_putnbr(ft_ultimate_range(&range, min, max));
	free (range);
	return (0);	
}
*/