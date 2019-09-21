void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_d, *ptr_s, *ptr;
	size_t			m;

	m = n;
	ptr_d = malloc(n * sizeof(char));
	ptr = ptr_d;
	ptr_s = (unsigned char*)src;
	while (n-- > 0)
		*(ptr_d++) = *(ptr_s++);
	ptr_s = ptr;
	ptr_d = (unsigned char*)dest;
	while (m-- > 0)
		*(ptr_d++) = *(ptr_s++);
	return(dest);
}
