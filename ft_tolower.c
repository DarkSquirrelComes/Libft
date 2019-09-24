int		ft_tolower(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return(c - 'A' + 'a');
	return(c);
}