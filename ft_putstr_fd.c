#include <unistd.h>

void		 ft_putstr_fd(char const *s, int fd)
{
	char	*ptr;

	ptr = (char*)s;
	while (*ptr)
	{
		write(fd, ptr, 1);
		++ptr;
	}
}
