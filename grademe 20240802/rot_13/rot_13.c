#include <unistd.h>

void rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (str[i] + 13 - 'a') % 26 + 'a';
			write (1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = (str[i] + 13 - 'A') % 26 + 'A';
			write (1, &str[i], 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		rot_13(argv[1]);
		write (1, "\n", 1);
	}
	return (0);
}