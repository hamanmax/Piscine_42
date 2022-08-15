/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/04 08:31:07 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/06 18:27:10 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_multichar(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a == '7')
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = (a + 1);
		while (b <= '8')
		{
			c = (1 + b);
			while (c <= '9')
			{
				ft_multichar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
