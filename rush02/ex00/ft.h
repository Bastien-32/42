/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonnot <mibonnot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:23:08 by othorel           #+#    #+#             */
/*   Updated: 2024/08/04 16:58:34 by mibonnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_list
{
	int		nb;
	char	*val;
	int		size;
}			t_list;
int		ft_atoi(const char *str);
void	ft_putstr(char *str);
int		open_file(const char *filename);
int		read_file(int fp, char *buffer);
char	*find_newline_pos(char *buffer, int bytesread);
char	*get_line_start(char *buffer);
int		get_line_length(const char *linestart);
int		write_line(const char *linestart, int linelen);
int		close_file(int fp);

#endif
