void	ft_putchar(char c);

void	rush(int x, int y)
{
	/* x = col  , y = li */
	/* i = ligne, j = colonne */
	int i, j;
	
	i = 0;
	while (i < y)
	{	j = 0;
		while(j < x)
		{	if ((i == 0 || i == (y - 1)) && (j == 0))
				ft_putchar('A');
			else if ((i == 0 || i == (y - 1)) && (j == (x - 1)))
				ft_putchar('C');
			else if ((i == 0 || i == (y - 1)) && (j != 0) && j != (x - 1))
				ft_putchar('B');
			else if ((i != 0 ) && ((j == 0 ) || (j == (x - 1))))
				ft_putchar('B');
			else if (i != 0 && i != (y -1) && j != 0 && j != (x - 1))
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
