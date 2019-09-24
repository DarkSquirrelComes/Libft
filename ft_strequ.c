int			ft_strequ(char const *s1, char const *s2)
{
	char	*ptr1, *ptr2;

	ptr1 = (char*)s1;
	ptr2 = (char*)s2;
	while (*ptr1 && *ptr2 && *ptr1 == *ptr2)
	{
		++ptr1;
		++ptr2;
	}
	return((*ptr1 == *ptr2) ? 1 : 0);
}