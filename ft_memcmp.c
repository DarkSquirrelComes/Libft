int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	ptr1, ptr2;

	ptr1 = s1;
	ptr2 = s2;
	if (n == 0)
		return(0);
	while (*ptr1 == *ptr2)
	{
		--n;
		if (n == 0)
			return(0);
		++ptr1;
		++ptr2;
	}
	return((int)*ptr1 - (int)*ptr2);
}