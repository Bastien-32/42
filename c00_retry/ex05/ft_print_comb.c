/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:56:54 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/21 09:51:08 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_abc(char a, char b, char c)
{
	if (a != '7')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ", ", 2);
	}
	else
	{	
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
}

void inner_func(char *a, char *b, char *c)
{
	while (*c <= '9')
	{
		ft_write_abc(*a, *b, *c);
		(*c)++;
	}
	
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			inner_func(&a, &b, &c);
		b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}


