/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:18:42 by badal-la          #+#    #+#             */
/*   Updated: 2024/08/06 14:57:26 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define MAX_BUFFER 1000

char	*get_line_start(char *buffer)
{
	char	*linestart;

	linestart = buffer;
	while (*linestart >= '0' && *linestart <= '9')
	{
		linestart++;
	}
	if (*linestart == ':')
	{
		linestart++;
	}
	return (linestart);
}

int	get_line_length(const char *linestart)
{
	int	linelen;

	linelen = 0;
	while (linestart[linelen] != '\0')
	{
		linelen++;
	}
	return (linelen);
}

int	write_line(const char *linestart, int linelen)
{
	if (write(1, linestart, linelen) == -1)
	{
		ft_putstr("Error write standard out\n");
		return (-1);
	}
	return (0);
}

int	close_file(int fp)
{
	if (close(fp) == -1)
	{
		ft_putstr("Error close file\n");
		return (-1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	buffer[MAX_BUFFER];
	int		fp;
	int		bytesread;
	char	*linestart;
	int		linelen;

	fp = open_file("dict.txt");
	bytesread = read_file(fp, buffer);
	linestart = get_line_start(buffer);
	find_newline_pos(buffer, bytesread);
	linelen = get_line_length(linestart);
	if (write_line(linestart, linelen) == -1)
	{
		close_file(fp);
		return (1);
	}
	(void)argv;
	return (0 * argc);
}
