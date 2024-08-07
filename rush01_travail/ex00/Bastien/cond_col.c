void	execut_col(char **tab)
{
	int	x; 
	int	y; 
	int i;

	x = 1;
	y = 0;
	while(tab[x])
	{
		if(tab[y][x] == 1)				// si col up == 1
			tab[1][x] = 4;
		if(tab[5][x] == 1)				// si col down == 1
			tab[4][x] = 4;
		if(tab[y][x] == 4)				// si col up == 4
		{
			i = 1;
			while (i < 4)
			{
				tab[i][x] = i;
				i++;
			}
			i = 0;
		}
		if(tab[4 + 1][x] == 4)		// si col down == 4
		{
			i = 4;
			while (i > 0)
			{

				tab[i][x] = i;
				i--;
			}
			i = 0;
		}
		if(tab[y][x] == 1 && tab[4 + 1][x] == 2) 		// si col up == 1 et col down == 2
			tab[4][x] = 4 - 1;
		if (tab[y][x] == 2 && tab[4 + 1][x] == 1)		// si col up == 2 et col down == 1
			tab[1][x] = 4 - 1;
		if(tab[y][x] == 2  && tab[4 + 1][x] == 4 - 1)	// si col up == 2 et col down == 3
			tab[2][x] = 4;
		if(tab[4 + 1][x] == 2  && tab[y][x] == 4 - 1)	// si col up == 3 et col down == 2
			tab[4 - 1][x] = 4;
		x++;
	}
}		
						