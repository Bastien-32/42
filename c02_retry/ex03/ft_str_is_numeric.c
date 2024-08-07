/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:33:16 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/23 12:23:15 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
		ft_str_is_numeric("")?"OK":"Fail",
		!ft_str_is_numeric("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
		!ft_str_is_numeric("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
		ft_str_is_numeric("1")?"OK":"Fail",
		!ft_str_is_numeric(" ")?"OK":"Fail",
		!ft_str_is_numeric("\\")?"OK":"Fail",
		!ft_str_is_numeric("\n")?"OK":"Fail");
}
*/