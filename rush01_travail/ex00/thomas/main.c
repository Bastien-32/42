
#include <unistd.h>
#include <stdlib.h>
#include "rush.h"

void	execut_col(char **tab)
{
	int	x; 
	int	y; 
	int i;

	x = 1;
	y = 0;
	while(tab[x])
	{
		if(tab[y][x] == 1)							// si row left == 1
			tab[1][x] = 4;
		if(tab[5][x] == 1)				// si row right == 1
			tab[4][x] = 4;
		if(tab[y][x] == 4)				// si row left == 4
		{
			i = 1;
			while (i < 4)
			{
				tab[i][x] = i;
				i++;
			}
			i = 0;
		}
		if(tab[4 + 1][x] == 4)		// si row right == 4
		{
			i = 4;
			while (i > 0)
			{

				tab[i][x] = i;
				i--;
			}
			i = 0;
		}
		if(tab[y][x] == 1 && tab[4 + 1][x] == 2) 				// si row left == 1 et row right == 2
			tab[4][x] = 4 - 1;
		if (tab[y][x] == 2 && tab[4 + 1][x] == 1)			// si row left == 2 et row right == 1
			tab[1][x] = 4 - 1;
		if(tab[y][x] == 2  && tab[4 + 1][x] == 4 - 1)	// si row left == 2 et row right == 3
			tab[2][x] = 4;
		if(tab[4 + 1][x] == 2  && tab[y][x] == 4 - 1)	// si row left == 3 et row right == 2
			tab[4 - 1][x] = 4;
		x++;

	}
}	

void	execut_row(char **tab)
{
	int	x;
	int	y; 
	int i;
	int result;
	int j;

	y = 1;
	x = 0;
	while(tab[y])
	{
		if(tab[y][x] == 1)							// si row left == 1
			tab[y][1] = 4;
		if(tab[y][5] == 1)				// si row right == 1
			tab[y][4] = 4;
		if(tab[y][x] == 4)				// si row left == 4
		{
			i = 1;
			while (i < 4)
			{
				tab[y][i] = i;
				i++;
			}
			i = 0;
		}
		if(tab[y][5] == 4)		// si row right == 4
		{
			i = 4;
			while (i > 0)
			{
				tab[y][i] = i;
				i--;
			}
			i = 0;
		}
		if(tab[y][x] == 1 && tab[y][4 + 1] == 2) 				// si row left == 1 et row right == 2
			tab[y][4] = 4 - 1;
		if (tab[y][x] == 2 && tab[y][4 + 1] == 2)			// si row left == 2 et row right == 1
			tab[y][1] = 0 + 4 - 1;
		if(tab[y][x] == 2 && tab[y][4 + 1] == 4 - 1)	// si row left == 2 et row right == 3
			tab[y][2] = 4;
		if(tab[y][4 + 1] == 2 && tab[y][x] == 4 - 1)	// si row left == 3 et row right == 2
			tab[y][4 - 1] = 4;
		y++;
	}

	tab[2][2] = 3; // a supp, ici juste pour verifier la condition des 3 chiffres entres
	y = 1;
	x = 1;
	result = 0;
	i = 0;
	while(tab[y])
	{
		while (x < 5)
		{
			if (tab[y][x] != 0)
			{
				result = result + tab[y][x];
				i++;
				x++;
			}
			else
			{
				result = result + tab[y][x];
				x++;
			}
			j = 1; 
			if (i == 3 && j < 5) 
			{
				if (tab[y][j] != 0)
					j++;
				else
				{
					tab[y][j] = 10 - result;
					j++;
				}
			}
		}
		y++;
	}
}

int	charToInt(char c)
{
	return c - 48;
}

int	intToChar(char c)
{
	return c + 48;
}

void test(char **tab)
{	
	int i = 0;

	while (i < 6)
	{
		int j;
		j = 0;
		while (j < 6)
		{
			char c;
			c = intToChar(tab[i][j]);
			write(1, &c, 1);
			if (j < 6 )
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	allocateTab(int rows, int cols, t_rush *rush)
{
	rush->tab = (char **)malloc(rows * sizeof(int *));
	int i = 0;
	
	while (i < rows)
	{
		rush->tab[i] = malloc(cols * sizeof(int));
		i++;
	}

}

void init(int rows, int cols, t_rush *rush)
{
	int i = 0;
	
	while (i < rows)
	{

		int j = 0;
		
		while (j < cols)
		{
			rush->tab[i][j] = 0;
			j++;
		}
		
		i++;
	}
}

void fill(char **tab, char *exo,t_rush *rush)
{
	int	i;
	int	j;
	int c;

	j = 0;
	if(!rush->tab || !tab || !exo)
		return ;
	while (j < 6)
	{
	i = 0;
		while (exo[i] && i < 32)
		{   
			c = charToInt(exo[i]);
			if (i < 8)
				rush->tab[0][1 + i / 2] = c;
			else if (i >= 8 && i < 16)
				rush->tab[5][1 + (i - 8) / 2] = c;
			else if (i >= 16 && i < 24)
				rush->tab[1 + (i - 16) / 2][0] = c;
			else if (i >= 24 && i < 32)
				rush->tab[1 + (i - 24) / 2][5] = c;
			i+=2;
		}
		j++;
	}
}

void drawn(char **tab, int rows, int cols)
{
	int	i;
	int	disp;
	char c;

	i = 0;
	disp = 1;
	if(disp == 1)
		test(tab);
	else
	{
		while (i++ < rows - 2)
		{
			int j;
			j = 1;
			while (j < cols - 1)
			{
				c = intToChar(tab[i][j]);
				write(1, &c, 1);
				if (j < cols - 1)
					write(1, " ", 1);
				j++;
			}
			write(1, "\n", 1);
		}
	}
}
/* void	check(int argc, char **argv)cd 
{
	int count;

	count = 0;
	if (argc > 2)
	{
		write(1, "ne donner qu une chaine de charactere svp",41);
	}
	while (argv[1])
	{
		count++;
	}

	if (count != 32 || count != 16)
	{
		write(1,"ecriver l enoncer en 16 charactere ou 32 charactere avec les espaces",68);
	}
	
	
} */

int main(int argc, char **argv)
{
	int rows = 6;
	int cols = 6;
	t_rush rush;
	(void)argc;
	allocateTab(rows, cols, &rush);
	init(rows, cols, &rush);
	fill(rush.tab, argv[1], &rush);
	execut_col(rush.tab);
	execut_row(rush.tab);
	drawn(rush.tab, rows, cols);


	return 0;
}
