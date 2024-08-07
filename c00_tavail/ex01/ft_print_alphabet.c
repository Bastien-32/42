/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:27:39 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/20 12:28:52 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{	
		write(1, &c, 1);
		c++;
	}
}
/*
#include <unistd.h>
int 	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}
*/
