#ifndef FT_REGEX
# define FT_REGEX

typedef struct	s_matches {
	char 				*content;
	struct s_matches	*next;
}	t_matches;

t_matches	*ft_regex(char *rule, char *str, int options);

#endif
