char		*strrchr(const char *s, int c)
{
	char	*ptr, *res;

	ptr = (char*)s;
	res = 0;
	while (*ptr)
	{
		if (*ptr == (char)c)
			res = ptr;
		++ptr;
	}
	return(res);
}