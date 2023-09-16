void	ft_putchar(char c);

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

void	put_corner(int x, int y, int col, int row)
{
	if (!col && !row)
		ft_putchar('A');
	else if (col == x - 1 && !row)
		ft_putchar('C');
	else if (!col && row == y - 1)
		ft_putchar('C');
	else
		ft_putchar('A');
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
				if (!in_corners(x, y, col, row))
					ft_putchar('B');
				else
					put_corner(x, y, col, row);
			}
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
