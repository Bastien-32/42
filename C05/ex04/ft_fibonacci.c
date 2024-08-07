/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:45:28 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/30 08:20:10 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (0 <= index)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int n;
	int	result;

	n = 3;
	result = ft_fibonacci(n);
	printf("%d\n", result);
	return(0);
}
*/
