#include <unistd.h>

void aff_first_param(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}


int main (int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "\n", 1);
	}
	else
		aff_first_param(argv[1]);
	return (0);
}