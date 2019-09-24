#include <string.h>
#include "libft.h"
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*p;

	if ((p = (char*)malloc(size)))
		ft_bzero(p, size);
	return (p);
}
