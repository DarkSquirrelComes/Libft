#include <unistd.h>

void		ft_putnbr(int n, int fd)
{
	char	ch;
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr(-1 * n, fd);
		return;
	}
	if (n < 10)
	{
		ch = '0' + (char)(n);
		write(fd, &ch, 1);
	}
	else
	{
		ft_putnbr(n / 10, fd);
		ch = '0' + (char)(n % 10);
		write(fd, &ch, 1);
	}
}
