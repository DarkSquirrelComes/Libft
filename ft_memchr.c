#include <string.h>

void			*ft_memchr(const void *s, int c, size_t n)
{
    char *ptr = (char*)s;
    while (n-- > 0)
        if (*(ptr++) == (char)c)
            return(--ptr);
    return(0);
}
