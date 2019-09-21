void				*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = -1;
	ptr = (unsigned char*)s;
	while(++i < n)
		*(ptr + i) = (unsigned char)c;
	return (s);
}
