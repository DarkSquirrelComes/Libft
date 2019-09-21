void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_d, *ptr_s;

	ptr_d = (unsigned char*)dest;
	ptr_s = (unsigned char*)src;
	while (n-- > 0)
		*(ptr_d++) = *(ptr_s++);
	return(dest);
}
