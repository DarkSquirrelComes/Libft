#include <string.h>

size_t		strlen(const char *str)
{
	char	*ptr;
	size_t	res;

	ptr = (char*)str;
	while (*(str++))
		++res;
	return(res);
}