#include <unistd.h>

void		ft_putstr(char const *s)
{
	char	*ptr;

	ptr = (char*)s;
	while (*ptr)
	{
		write(1, ptr, 1);
		++ptr;
	}
}
