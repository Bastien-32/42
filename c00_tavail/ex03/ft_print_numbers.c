/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:17:38 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/20 12:32:06 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{	
		write(1, &n, 1);
		n++;
	}
}
/*
#include <unistd.h>
int 	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}
*/
