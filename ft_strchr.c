char		*strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char*)s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return(ptr);
		++ptr;
	}
	return(0);
}