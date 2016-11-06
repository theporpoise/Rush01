#include "gsudoku.h"

int		main(int ac, char **av)
{
	if (validate_input(ac, av))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	// validate input confirmed with validate script.

	int		***cube;

	cube = initialize_cube(av);
	// may need to check initialize variables to check bools, but code looks ok.
	render(cube);
	// render cube working well.
	ft_putchar('\n');
	
	/*
	int		i;
	i = 0;
	while (i < 9)
	{
		cube[0][i][0] = i;
		i++;
	}
	*/
	render(cube);
	ft_putchar('\n');

	/*
	
	i = 0;
	while (i < 10)
	{
		ft_putchar(cube[0][0][i] + '0');
		i++;
	}

	cube = row_check(cube);
	i = 0;
	while (i < 10)
	{
		ft_putchar(cube[0][0][i] + '0');
		i++;
	}
	*/
	cube = eliminate(cube);
	render(cube);
	ft_putchar('\n');
	
	return (0);
}