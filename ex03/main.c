#include <stdlib.h>

void	rush(int x, int y);

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		rush(atoi(av[1]), atoi(av[2]));
		rush(-1, 0);
	}
	return (0);
}
