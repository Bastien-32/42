/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:24:08 by badal-la          #+#    #+#             */
/*   Updated: 2024/08/06 17:27:16 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("aaa","aaa"));
	printf("%d\n", ft_strcmp("aaa","aab"));
	printf("%d\n", ft_strcmp("aab","aaa"));
	printf("%d\n", ft_strcmp("aaaa","aaa"));
}
*/