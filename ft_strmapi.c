#include "libft.h"
#include <stdlib.h>

char 				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	int				i, n;

	n = ft_strlen(s);
	res = malloc(sizeof(char) * (n + 1));
	i = -1;
	while (++i < n)
	{
		res[i] = f(i, (char)s[i]);
		++i;
	}
	res[n] = 0;
	return(res);
}
