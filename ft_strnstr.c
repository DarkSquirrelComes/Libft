#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int pos;
	unsigned int i;

	if (!*to_find)
		return ((char*)str);
	pos = 0;
	while (str[pos] != '\0' && (size_t)pos < len)
	{
		i = 0;
		while (to_find[i] != '\0' && str[pos + i] == to_find[i] &&
				(size_t)(pos + i) < len)
			++i;
		if (to_find[i] == '\0')
			return ((char*)(str + pos));
		++pos;
	}
	return (0);
}