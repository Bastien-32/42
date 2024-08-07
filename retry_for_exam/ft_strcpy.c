
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
int	ft_strncpy(char *dest, char *src, unsigned int nb)
{
	unsigned int	 i;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[i] = src[i];
		i++;
	}
	while (i == nb)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest[i]);
}
int	ft_is_alhabetic(char *str)
{
	int	i;

	i = 0;
	while ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
	{
		return (0);
		i++;
	}
	return (1);
}
char	ft_capitalize(char *str)
{
	int	i;

	i = 0;
	while (stri[i] == 0 && str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	while ((str[i] == ' ' || str[i] = 43 || str[i] = 45) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
	{
		str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}













#include <stdio.h>
int	main(void)
{
	printf("%s\n%s\n", 
		ft_is_alhabetic("avbDA") ? "ok" : "fail",
		!ft_is_alhabetic(" ") ? "ok" : "fail");
	return (0);
}
