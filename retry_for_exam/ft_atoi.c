/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:15:05 by badal-la          #+#    #+#             */
/*   Updated: 2024/08/07 10:04:19 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int 	ft_atoi(const char *str)
{
	long result;
	int sign;
	int i;

	result = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - '0';
	result = result * sign;
	return((int)result);
}
/*
#include <unistd.h>
void	ft_putnbr(int nb)
{
	char 	c;
	if (nb == -2147483648)
	{
		write (1, "  -2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
		write(1, &c, 1);
}
int	main(void)
{
char	numb[] = "3145841222";
ft_putnbr(ft_atoi(numb));
return (0);
}*/

