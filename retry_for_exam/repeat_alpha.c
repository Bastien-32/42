#include <unistd.h>

void repeat_alpha(char *s)
{
	int i; 
	int count;
	
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			count = s[i] - 'a';
			while (count >= 0)
			{
				write(1, &s[i], 1);
				count--;
			}
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			count = s[i] - 'A';
			while (count >= 0)
			{
				write(1, &s[i], 1);
				count--;
			}
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
int main(int ac, char **av)
{
	if (ac != 2)
		write(1, "\n", 1);
	repeat_alpha(av[1]);
	return (0);
}