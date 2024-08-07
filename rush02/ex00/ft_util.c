/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:10:22 by othorel           #+#    #+#             */
/*   Updated: 2024/08/05 11:50:00 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define MAX_BUFFER 2000

int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	open_file(const char *filename)
{
	int	fp;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		ft_putstr("Error open fil\n");
		return (1);
	}
	return (fp);
}

int	read_file(int fp, char *buffer)
{
	int	bytesread;

	bytesread = read (fp, buffer, MAX_BUFFER - 1);
	if (bytesread == -1)
	{
		ft_putstr("Error reading file\n");
	}
	buffer[bytesread] = '\0';
	return (bytesread);
}

char	*find_newline_pos(char *buffer, int bytesread)
{
	int	i;

	i = 0;
	while (i < bytesread)
	{
		if (buffer[i] == '\n')
		{
			buffer[i] = '\0';
			return (&buffer[i]);
		}
		i++;
	}
	return (NULL);
}
