#include <string.h>

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*ptr1, *ptr2;
	size_t	i;

	if (n == 0)
		return(1);
	ptr1 = (char*)s1;
	ptr2 = (char*)s2;
	i = 0;
	while (*ptr1 && *ptr2 && *ptr1 == *ptr2 && ++i <= n)
	{
		++ptr1;
		++ptr2;
	}
	return((*ptr1 == *ptr2) ? 1 : 0);
}