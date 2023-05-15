#include "../libft/includes/libft.h"

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

int	main(void)
{
	char	*str;

	str = NULL;
	str = charjoin(str, 'l');
	ft_putendl_fd(str, 1);
	str = charjoin(str, 'o');
	ft_putendl_fd(str, 1);
	str = charjoin(str, 'l');
	ft_putendl_fd(str, 1);
	free(str);
}
