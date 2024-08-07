#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

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

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int ft_strlen(const char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void reverse_string(char *str)
{
	int len = ft_strlen(str);
	int i = 0;
	char temp;

	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char dest[50];

	if (argc != 2)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	ft_strcpy(dest, argv[1]);
	reverse_string(dest);
	ft_putstr(dest);
	ft_translate(dest)

	return (0);
}

void ft_translate_units(char *str)
{
	while (str[1] < '2' && ft_strlen(str) > 1)
	{
		if (str[1] == '0')
			ft_putstr(tab.alpha[str[0]]); // voir comment on appelle les structures de 0 a 9
		if (str[1] == '1')
			ft_putstr(tab.alpha[str[0]]); // voir comment on appelle les structures de 10 a 19
	}

}
void ft_translate_tens(char *str)
{
	while (str[1] > 2)
	{
		if (str[1] == 0)
			ft_putstr(tab.alpha[str[0]]); // voir comment on appelle les structures de 0 a 9
		if (str[1] == 1)
			ft_putstr(tab.alpha[str[0]]); // voir comment on appelle les structures de 10 a 19
	}

}


