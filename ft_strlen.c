#include <string.h>

size_t		strlen(const char *str)
{
	char	*ptr;
	size_t	res;

	res = 0;
	ptr = (char*)str;
	while (*(str++))
		++res;
	return(res);
}