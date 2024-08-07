


#include <unistd.h>
int char_in_str(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
void inter(char *s1, char *s2)
{
	int i;
	int j;
	char tab[50];
	
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (char_in_str(s1[i], tab) == 0)
		{
			tab[j] = s1[i];
			j++;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		{
			if (char_in_str(s2[i], tab) == 0)
			{
				tab[j] = s2[i];
				j++;
			}
		}
		i++;
	}
	tab[j] = '\0'
	write(1, tab, j);
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	if (ac != 3)
		write(1, "\n", 1);
	inter(av[1], av[2]);
	return (0);
}
/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/