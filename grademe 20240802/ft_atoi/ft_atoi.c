int ft_atoi(const char *str)
{
	long result;
	int sign;
	int i;

	sign = 1;
	i = 0;
	result = 0;
	while (str[0] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i]>= '0' && str[i] <= '9')
		result = (result * 10) + (str[i++] - '0');
	result = result * sign;
	return ((int)result);
}
/*#include <stdio.h>

int main (void)
{
	int nb = ft_atoi("582");
	printf("%d", nb);
}*/