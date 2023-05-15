#include "../include/ft_regex.h"
#include "../libft/includes/libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

static char	*charjoin(char *str, char c)
{
	size_t	len;
	char	*new_str;

	if (str == NULL)
		str = ft_calloc(2, sizeof(char));
	len = ft_strlen(str);
	new_str = ft_calloc(len + 2, sizeof(char));
	ft_strlcpy(new_str, str, len + 1);
	new_str[len] = c;
	new_str[len + 1] = '\0';
	free(str);
	return (new_str);
}

static t_matches	*char_range(char c1, char c2, char *str)
{
	int			i;
	t_matches	*matches;

	i = 0;
	matches = malloc(sizeof(t_matches));
	matches->content = NULL;
	while (str[i] != '\0')
	{
		if (str[i] >= c1 && str[i] <= c2)
			matches->content = charjoin(matches->content, str[i]);
		else if (matches->content != NULL)
			break ;
		i++;
	}
	matches->next = NULL;
	return (matches);
}

t_matches	*ft_regex(char *rule, char *str, int options)
{
	int			i;
	t_matches	*matches;

	i = 0;
	matches = NULL;
	(void)options;
	while (rule[i] != '\0')
	{
		if (rule[i] == '[')
		{
			matches = char_range(rule[i + 1], rule[i + 3], str);
			break ;
		}
		i++;
	}
	return (matches);
}
