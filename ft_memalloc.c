#include "libft.h"
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*p;

	if (p = malloc(size))
		ft_bzero(p, size);
	return (p);
}
