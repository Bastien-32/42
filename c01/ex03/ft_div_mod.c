/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:00:50 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/22 10:41:18 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;

	a = 24; 
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d/%d=%d - reste = %d",a , b, div, mod);
}
*/
