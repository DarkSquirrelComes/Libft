void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr_d, *ptr_s;

	ptr_d = (unsigned char*)dest;
	ptr_s = (unsigned char*)src;
	while (n-- > 0)
	{
		*(ptr_d++) = *(ptr_s++);
		if (*ptr_s == (char)c)
			return ++ptr_d
	}
	return(0);
}
