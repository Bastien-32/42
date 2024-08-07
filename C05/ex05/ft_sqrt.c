/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:06:49 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/30 08:20:36 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = 0;
	if (nb == 1)
		return (1);
	while (result <= nb && i <= nb / 2)
	{
		result = i * i;
		if (result == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int n;
	int	result;

	n = 0;
	result = ft_sqrt(n);
	printf("%d\n", result);
	n = 121;
	result = ft_sqrt(n);
	printf("%d\n", result);
	return(0);
}
*/
