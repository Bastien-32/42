/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 08:19:07 by badal-la          #+#    #+#             */
/*   Updated: 2024/08/02 11:46:43 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	if (size == 0)
		return (0);
	while (strs[i] && i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	j = 0;
	while (sep[j])
		j++;
	count = count + (i - 1) * j;
	return (count);
}

char	*ft_strjoin( int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	i = 0;
	dest = "";
	dest = malloc ((ft_strlen(size, strs, sep) + 1) * sizeof(int));
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	while (i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if ((i + 1) != size)
			dest = ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	int		size;
	char	*strs[] = {"Hugo", "John", "Thomas", "Pierre"};
	char	*sep = ", ";
	char	*ptr;

	size = 4;
	ptr = ft_strjoin(size, strs, sep);
	ft_putstr(ptr);
	ft_putstr("\n");
	free(ptr);
	return (0);
}
*/
