#include <string.h>

void				ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	if (s == 0)
		return;
	i = -1;
	ptr = (unsigned char*)s;
	while(++i < n)
		*(ptr + i) = 0;
}
