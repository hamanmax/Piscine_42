/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_combn.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/06 16:08:50 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/06 16:42:34 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb);
{
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 13);
	}
	if (nb < 0 && nb != -2147483648)
	{
	ft_putchar ('-');
	nb = -nb;
	}
	if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + '0');	
		}
	if(nb >= 0)
		{
			ft_putchar(nb % 10 + '0');
		}
}

void	ft_print_combn()
	cd 
