/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/05 15:53:37 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 10:51:04 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_digit(int a)
{
	int b;
	int c;

	b = (a / 10);
	c = (a % 10);
	ft_putchar(b + '0');
	ft_putchar(c + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int d;

	a = 0;
	d = 0;
	while (d < 99)
	{
		d++;
		ft_digit(a);
		ft_putchar(' ');
		ft_digit(d);
		if (a != 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		while (d == 99 && a != 98)
		{
			d = (a + 1);
			a++;
		}
	}
}
