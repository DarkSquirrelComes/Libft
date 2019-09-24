#include <stdlib.h>
#include <string.h>

char		*ft_itoa(int n)
{
	size_t	size;
	int		m;
	char	*res;

	size = 0;
	m = n;
	if (n < 0)
	{
		n *= -1;
		m = n;
		++size;
	}
	while (m != 0)
	{
		m /= 10;
		++size;
	}
	if (!(res = (char*)malloc(sizeof(char) * (size + 1))))
		return(0);
	res[size] = 0;
	while (size > 0)
	{
		--size;
		res[size] = n % 10;
		n /= 10;
	}
	if (res[0] == '0')
		res[0] = '-';
	return(res);
}
