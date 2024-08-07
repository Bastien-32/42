/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:02:53 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/30 08:19:17 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		if (nb == 0)
			return (1);
		if (power == 0)
			return (1);
		else
			result = result * nb;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int n;
	int pwr;
	int	result;

	n = 3;
	pwr = 3;
	result = ft_iterative_power(n, pwr);
	printf("%d\n", result);
	return(0);
}
*/