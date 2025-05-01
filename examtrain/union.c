#include <unistd.h>

int	seen(char *str, char c, int pos)
{
	while (pos >= 0)
	{
		if (str[pos] == c)
		{
		    return (1);
		}
		pos--;
    }
	return (0);
}

int	in_str(char *str, char c)
{
	int i = 0;
	while (str[i])
		if (str[i++] == c)
			return (1);
	return (0);
}

int	main()
{
	int i = 0;
    char av1[] = "rien";
    char av2[] = "cette phrase ne cache rien";


		while (av1[i])
		{
			if (!seen(av1, av1[i], i-1))
				write(1, &av1[i], 1);
			i++;
		}
		i = 0;
		while (av2[i])
		{
			if (!in_str(av1, av2[i]) && !seen(av2, av2[i], i-1))
				write(1, &av2[i], 1);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
