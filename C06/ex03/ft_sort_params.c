/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:10:00 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/31 15:09:42 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_char_tab(char **str, int size)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (ft_strcmp(str[i], str[j]) < 0)
			{
				swap = str[i];
				str[i] = str[j];
				str[j] = swap;
				j++;
			}
			else
				j++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort_char_tab(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
