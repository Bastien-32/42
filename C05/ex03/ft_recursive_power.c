/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:33:10 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/30 08:19:37 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (i <= power)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int n;
	int pwr;
	int	result;

	n = 3;
	pwr = 4;
	result = ft_recursive_power(n, pwr);
	printf("%d\n", result);
	return(0);
}
*/