#include "../../../include/token.h"

static void	reset_backslash(void)
{
	backslash()->nb = 0;
}

static int	in_backslash(void)
{
	if (backslash()->nb >= 1)
		return (1);
	return (0);
}

static int	is_backslash(char c)
{
	if (c == '\\')
	{
		if (backslash()->in())
		{
			backslash()->nb = 0;
			return (0);
		}
		else
		{
			backslash()->nb = 1;
			return (1);
		}
	}
	return (0);
}

t_token	*backslash(void)
{
	static t_token	*instance;

	if (instance == NULL)
	{
		instance = malloc(sizeof(t_token));
		if (instance == NULL)
			return (NULL);
		instance->nb = 0;
		instance->in = in_backslash;
		instance->is = is_backslash;
		instance->reset = reset_backslash;
	}
	return (instance);
}
