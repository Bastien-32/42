/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:27:58 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/22 17:33:46 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
#include <unistd.h>

int	main(void)
{
	int a;

	ft_ft(&a);
	if (a == 42)
		write(1, "OK\n", 3);
	else
		write(1, "ko\n", 3);
}
*/

/*
#include <unistd.h>

int	main(void)
{
	int a;
	int	*ptr;
	
	ptr = &a;
	ft_ft(&a);
	ft_ft(ptr);
	if (a == 42)
		write(1, "OK\n", 3);
	else
		write(1, "ko\n", 3);
}