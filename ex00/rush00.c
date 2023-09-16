void	ft_putchar(char c);

int	in_edge_col(int x, int col)
{
	if (col == 0 || col == x - 1)
		return (1);
	return (0);
}

int	in_walls(int x, int y, int col, int row)
{
	if (col == 0 || col == x - 1)
		return (1);
	if (row == 0 || row == y - 1)
		return (1);
	return (0);
}

int	in_corners(int x, int y, int col, int row)
{
	if (col == 0 && (row == 0 || row == y - 1))
		return (1);
	if (col == x - 1 && (row == 0 || row == y - 1))
		return (1);
	return (0);
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if (in_walls(x, y, col, row))
			{
				if (in_corners(x, y, col, row))
					ft_putchar('o');
				else if (in_edge_col(x, col))
					ft_putchar('|');
				else
					ft_putchar('-');
			}
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
