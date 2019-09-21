#include "libft.h"
#include <stdlib.h>

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*res;
	unsigned int	i, n;

	n = ft_strlen(s);
	res = malloc(sizeof(char) * n);
	i = -1;
	while (++i < n)
	{
		*(res + i) = f((char*)(s + i));
		++i;
	}
}