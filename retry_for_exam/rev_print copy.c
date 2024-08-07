/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:45:09 by badal-la          #+#    #+#             */
/*   Updated: 2024/08/04 18:25:15 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*rev_print(char *src)
{
	int	i;

	i = ft_strlen(src) - 1;
	while (i >= 0)
		{
			write(1, &src[i], 1);
			i--;
		}
	return (src);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	char	src[] = "Bonjour";
	char	*dest;
	
	dest = rev_print(src);
	ft_putstr("\n");
}
