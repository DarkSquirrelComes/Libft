char		*strchr(const char *s, int c)
{
	char	*ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return(ptr);
		++ptr;
	}
	return(0);
}