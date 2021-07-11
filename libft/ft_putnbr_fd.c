#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	n;
	int		num;

	n = nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	num = n % 10;
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((num + '0'), fd);
}
