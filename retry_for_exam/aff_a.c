#include <unistd.h>

void aff_a(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			write(1, "a", 1);
			return;
		}
		else
			i++;
	}
	write(1, "\n", 1);
}

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "a", 1);
		write(1, "\n", 1);
	}
	else
	{
		aff_a(argv[1]);
		return (0);
	}
}