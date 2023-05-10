#ifndef FT_REGEX
# define FT_REGEX

# define O_GLOBAL 1
# define O_MULTILINE 2
# define O_INSENSITIVE 4
# define O_EXTENDED 8
# define O_SINGLELINE 16
# define O_UNICODE 32

typedef struct	s_matches {
	char 				*content;
	struct s_matches	*next;
}	t_matches;

t_matches	*ft_regex(char *rule, char *str, int options);

#endif
