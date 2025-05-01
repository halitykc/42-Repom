#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	space = 0;

	if (argc == 2)
	{
		// Skip leading spaces and tabs
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;

		while (argv[1][i])
		{
			// If it's a space or tab
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				space = 1;
			else
			{
				// Write a space if needed before the word
				if (space)
					write(1, " ", 1);
				space = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
