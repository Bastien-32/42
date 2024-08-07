/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 08:44:45 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/23 12:23:27 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_uppercase("")?"OK":"Fail",
			!ft_str_is_uppercase("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
			!ft_str_is_uppercase("1")?"OK":"Fail",
			!ft_str_is_uppercase(" ")?"OK":"Fail",
			!ft_str_is_uppercase("\\")?"OK":"Fail",
			!ft_str_is_uppercase("\n")?"OK":"Fail");
}
*/