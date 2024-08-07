/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 08:50:06 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/23 12:23:42 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_printable("")?"OK":"Fail",
			ft_str_is_printable("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			ft_str_is_printable("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
			ft_str_is_printable("1")?"OK":"Fail",
			ft_str_is_printable(" ")?"OK":"Fail",
			ft_str_is_printable("\\")?"OK":"Fail",
			!ft_str_is_printable("\n")?"OK":"Fail");
}
*/