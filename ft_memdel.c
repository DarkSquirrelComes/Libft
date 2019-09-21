#include "libft.h"
#include <stdlib.h>

void	ft_memdel(void **ap)
{
	while (*ap)
	{
		free(*ap);
		*ap = 0;
		++ap;
	}
}