



/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Le programme prend en paramètres deux chaînes de caractères et vérifie qu'il
est possible d'écrire la première chaîne de caractères a l'aide des caractères
de la deuxiême chaîne, tout en respectant l'ordre des caractères dans la
deuxième chaîne.

Si cela est possible, le programme affiche la première chaîne de caractères,
suivie de '\n'. Sinon le programme affiche seulement '\n'.

Si le nombre de paramètres transmis est différent de 2, le programme affiche
'\n'.

Exemples :

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/






#include <unistd.h>
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_wdmatch(char *s1, char *s2)
{
	int i;
	int j;
	char dest[50];
	
	i = 0;
	j = 0;
	while (s2[i])
	{
		if (s2[i] == s1[j])
		{
			dest[j] = s1[j];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	if (ft_strlen(s1) == ft_strlen(dest))
		write(1, dest, j);
/*	{
		i = 0;
		while (dest[i])
		{
			write(1, &dest[i], 1);
			i++;
		}
	}*/
	write(1, "\n", 1);
}

int main(int ac, char **av) 
{
	if (ac != 3)
		write(1, "\n", 1);
	else
 		ft_wdmatch(av[1], av[2]);
	return (0);
}
