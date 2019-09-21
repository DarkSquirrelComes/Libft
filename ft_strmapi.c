#include "libft.h"
#include <stdlib.h>

char 				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i, n;

	n = ft_strlen(s);
	res = malloc(sizeof(char) * n);
	i = -1;
	while (++i < n)
	{
		*(res + i) = f(i, (char)(*(s + i)));
		++i;
	}
}