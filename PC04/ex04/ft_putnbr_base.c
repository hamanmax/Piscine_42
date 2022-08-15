/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 15:03:44 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/18 18:52:58 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_test_base(char *base, int j, int i)
{
	while (base[i] || base[0] == '\0')
	{
		if (base[1] == '\0' || base[0] == '\0')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		if (base[i] < '0')
			return (0);
		if (base[i] == '+' && base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	nb;
	int		j;

	i = 0;
	nb = nbr;
	j = 0;
	if (ft_test_base(base, i, j) == 1)
	{
		while (base[i] && base[i] > 0)
			i++;
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= i)
		{
			ft_putnbr_base(nb / i, base);
		}
		ft_putchar(base[nb % i]);
	}
}
