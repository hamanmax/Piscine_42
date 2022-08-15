/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_show.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pnavarro <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/14 19:53:32 by pnavarro     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 23:25:58 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "libutil.h"

void	ft_show(void)
{
	int		i;
	int		j;
	char	c;

	j = 1;
	i = 1;
	while (i < 5)
	{
		while (j < 5)
		{
			c = tab[i][j] + 48;
			ft_putchar(c);
			ft_putchar(' ');
			j++;
		}
		j = 1;
		ft_putchar('\n');
		i++;
	}
}
