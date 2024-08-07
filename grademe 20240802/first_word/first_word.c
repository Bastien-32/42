#include <unistd.h>

void first_word(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			j++;
		i++;
	}
	if (j == 0)
	{
		write (1, "\n", 1);
		return;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			write(1, &str[i], 1);
		else 
		{
			write (1, "\n", 1);
			return;
		}
		i++;
	}
	write (1, "\n", 1);
}

int main(int argc, char *argv[])
{
	
	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		first_word(argv[1]);
	}
	return (0);
}