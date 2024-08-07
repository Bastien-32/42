void	execut_row(char **tab)
{
	int	x;
	int	y; 
	int i;
	int result;

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
	tab[2][2] = 3;
	while ( x < 5 && tab[y])
	{
		result = 0;
		i = 0;
		x = 1;
		if (tab[y][x] != 0 && x < 5)
		{
			result = result + tab[y][x];
			i++;
			x++;
		}
		else
			x++;
		x = 1; //pas au bon ebndroit je sens 
		while (i == 3 && tab[y][x]) // ca boucle mais le x initial reste a gerer
		{
			if (tab[y][x] != 0)
				x++;
			else(tab[y][x] = 0)
			{
			tab[y][x] = 10 - result; //si on tente le bonus formuler une equation qui somme tout 1+2+3+...+9 a la place de 10
				x++;
			}
		}
	}
}
/*
						else if(tab[y][x] == 3 && tab[y][4 + 1] == 1) // a revoir pas bon y a dautre combis
						{
							tab[y][x + 1] = 4;  //a supprimer car on le dit deja au 1er if
							tab[y][4] = 4 - 2;
						}
						else if(tab[y][x] == 1 && tab[y][4 + 1] == 3) // a revoir pas bon y a dautre combis
							tab[y][1] != 4 || tab[y][1] != 4 - 1;
	
	while ( x < 5)
	{
		result = 0;
		i = 0;
		x = 1;
		if (tab[y][x] != '0' && x < 5)
		{
			result = result + tab[y][x];
			i++;
			x++;
		}
		else
			x++;
		x = 1; //pas au bon ebndroit je sens 
		while (i == 3 && tab[y][x]) // ca boucle mais le x initial reste a gerer
		{
			if (tab[y][x] != '0')
				x++;
			else(tab[y][x] = '0')
			{
			tab[y][x] = 10 - result; //si on tente le bonus formuler une equation qui somme tout 1+2+3+...+9 a la place de 10
				x++;
			}
		}
	}
	y++;
}
*/


