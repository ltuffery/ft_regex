#ifndef FT_REGEX
# define FT_REGEX

# define O_GLOBAL 1
# define O_MULTILINE 2
# define O_IGNORECASE 4

typedef struct	s_matches {
	char 				*content;
	struct s_matches	*next;
}	t_matches;

t_matches	*ft_regex(char *rule, char *str, int options);

#endif
