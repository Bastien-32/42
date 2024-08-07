/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:56:54 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/20 13:14:56 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_abc(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
		write(1, "789", 3);
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ", ", 2);
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
			while (c <= '9')
			{
				ft_write_abc(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}


#include <unistd.h>
int 	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}
