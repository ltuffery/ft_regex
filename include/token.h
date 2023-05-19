#ifndef TOKEN_H
# define TOKEN_H

# include <stdlib.h>

typedef struct s_token {
	int		nb;
	int		(*in)(void);
	int		(*is)(char);
	void	(*reset)(void);
}	t_token;

t_token	*crochet();
t_token	*backslash(void);

#endif
