#include <stdio.h>
#include <stdlib.h>
#include "../include/ft_regex.h"

int	main(int ac, char **av)
{
	t_matches	*tmp;

	if (ac < 3 || ac > 3)
	{
		printf("Usage : ./regex <rule> <phrase>");
		return (1);
	}
	tmp = ft_regex(av[1], av[2], 0);
	while (tmp != NULL)
	{
		printf("%s\n", tmp->content);
		free(tmp->content);
		tmp = tmp->next;
	}
	free(tmp);
}
