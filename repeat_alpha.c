#include <unistd.h>

void	ft_repeat_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	while(str[i])
	{
		if ((str[i] >= 32 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 125))
			write(1, &str[i], 1);
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 'a' + 1;
			while (j > 0)
			{
				write (1, &str[i], 1);
				j--;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 'A' + 1;
			while (j > 0)
			{
				write (1, &str[i], 1);
				j--;
			}
		}
		i++;
	}
	write(1, "\n", 1);
}


int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}

	ft_repeat_alpha(argv[1]);
	
	return(0);	
}