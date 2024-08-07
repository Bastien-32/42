 #include <unistd.h>
 #include <fcntl.h>

 void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	ft_atoi( char *str)
{
	long	result;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++ ;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - 48;
	result = result * sign;
	return ((int)result);
}

 int	main(int argc, char *argv[])
 {
	int nb;
	int fd;
	int	i;
	char	line;

	nb = ft_atoi(argv[1]);
	if (argc != 2)
		write(1, "Error", 5);
	fd = open(numbers.dict, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	

/*	ft_putnbr(nb); // a supprimer au final
	write(1, "\n", 1);*/
	close(fd);
	return (0);	
 }

