/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:53:21 by badal-la          #+#    #+#             */
/*   Updated: 2024/08/01 14:24:50 by badal-la         ###   ########.fr       */
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
/*
int	main(void)
{
	int	*tab;
	int	min;
	int	max;
	int	i;
	
	i = 0;
	max = 12;
	min = 5;
	tab = ft_range(min, max);
	while (i < (max - min))
	{
		//printf("Tab[%d] = %d\n", i, tab[i]);
		write(1, &tab[i], 1);
		i++;
	}
	free(tab);
	return (0);
}
*/