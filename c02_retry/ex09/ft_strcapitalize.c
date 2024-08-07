/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:30:35 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/25 13:41:20 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int		main()
{
	char str[] = "salut, coMMEnt \a tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);

	printf("%s\n", str);
	return (0);
}


