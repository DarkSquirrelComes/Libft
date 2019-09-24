#include <unistd.h>

void		ft_putnbr(int n)
{
	char	ch;
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * n);
		return;
	}
	if (n < 10)
	{
		ch = '0' + (char)(n);
		write(1, &ch, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ch = '0' + (char)(n % 10);
		write(1, &ch, 1);
	}
}
