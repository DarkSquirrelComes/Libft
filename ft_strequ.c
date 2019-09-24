int			ft_strequ(char const *s1, char const *s2)
{
	char	*ptr1, ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while (*ptr1 && *ptr2 && *ptr1 == *ptr2)
	{
		++ptr1;
		++ptr2;
	}
	return((*ptr1 == *ptr2) ? 1 : 0);
}