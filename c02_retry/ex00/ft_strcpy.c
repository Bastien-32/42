/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:34:15 by badal-la          #+#    #+#             */
/*   Updated: 2024/07/23 14:42:48 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*   
#include <stdio.h>

int		main()
{
	char dest[] = "Epic fail";
	char src[] = "Success";
	printf("Must all be same (3 lines):\n");
	printf("%s\n%s\n%s\n",
		src,
		ft_strcpy(dest, src),
		dest);
}
*/
