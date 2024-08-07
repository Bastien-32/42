/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:10:51 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/28 19:10:52 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

typedef struct s_rush
{
	char	**tab;
}			t_rush;

int		chartoint(char c);
int		inttochar(char c);
void	check(int argc, char **argv);
void	check_line(char **argv, int count);
void	test(char **tab);
void	fill_14(char **tab, int x, int y, int i);
void	execut_col(char **tab);
void	execut_row(char **tab);
#endif
