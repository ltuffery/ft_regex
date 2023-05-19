#include "../../../include/token.h"

static void	reset(void)
{
	crochet()->nb = 0;
}

static int	in_crochet(void)
{
	if (crochet()->nb > 0)
		return (1);
	return (0);
}

static int	is_crochet(char c)
{
	if (c == '[' && !backslash()->in())
	{
		crochet()->nb++;
		return (1);
	}
	else if (c == ']' && !backslash()->in())
	{
		crochet()->nb--;
		return (1);
	}
	return (0);
}

t_token	*crochet()
{
	static t_token	*instance;

	if (instance == NULL)
	{
		instance = malloc(sizeof(t_token));
		instance->nb = 0;
		instance->in = in_crochet;
		instance->is = is_crochet;
		instance->reset = reset;
	}
	return (instance);
}
