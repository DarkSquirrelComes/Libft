#include "libft.h"
#include <stdlib.h>

void	ft_strdel(char **ap)
{
	while (*ap)
	{
		free(*ap);
		*ap = 0;
		++ap;
	}
}