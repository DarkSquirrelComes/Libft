int		ft_toupper(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return(c + 'A' - 'a')
	return(c);
}