#include <stddef.h>
#include "../../include/token.h"

int	parse_ruled(char *rules)
{
	size_t	i;

	i = 0;
	while (rules[i] != '\0')
	{
		backslash()->is(rules[i]);
		crochet()->is(rules[i]);
		i++;
	}
	return (0);
}
