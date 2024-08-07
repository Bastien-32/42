/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:24:08 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/24 12:08:23 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
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