/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:23:29 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/22 08:24:13 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi(char *string)
{
	long result;
	int 	negative;
	int 	i;

	i = 0;
	negative = 0;
	result = 0;
	if(string[i] == '-')
	{	
		negative = 1;
		i++;
	}
	while(string[i] != '\0')
	{
		if (string[i] >= '0' && string[i] <= '9')
		{
			result = result * 10;
			result = result + string[i] - '0';
			i++;
		}
		else
			break;
	}
	if(negative != 0)
		result = -result;
	if(result < -2147483648 || result > 2147483647)
	{
		write(2, "chiffre trop grand", 18);
		return (1);
	}
	return((int) result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "-585";
	printf("%d",ft_atoi(str));
	return(0);
}
*/
