size_t		strlen(const char *str)
{
	char	*ptr;
	size_t	res;

	ptr = str;
	while (*(str++))
		++res;
	return(res);
}