#include <unistd.h>

void		ft_putstr(char const *s)
{
	char	*ptr;

	ptr = s;
	while (*ptr)
	{
		write(1, ptr, 1);
		++ptr;
	}
}
