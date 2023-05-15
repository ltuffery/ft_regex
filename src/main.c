#include <stdio.h>
#include <stdlib.h>
#include "../include/ft_regex.h"

int	main(int ac, char **av)
{
	t_matches	*matches;
	t_matches	*tmp;

	if (ac < 3 || ac > 3)
	{
		printf("Usage : ./regex <rule> <phrase>\n");
		return (1);
	}
	matches = ft_regex(av[1], av[2], 0);
	tmp = matches;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->content);
		free(tmp->content);
		tmp = tmp->next;
	}
	free(matches);
}
