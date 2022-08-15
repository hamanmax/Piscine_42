/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_non_printable.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/09 21:04:34 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 17:41:55 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexaconverter(int n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[n / 16]);
	ft_putchar(hexa[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] <= 31 || str[i] >= 127)
		{
			ft_putchar(92);
			ft_hexaconverter(str[i]);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}
