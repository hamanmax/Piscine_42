/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_line.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pnavarro <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/14 22:21:24 by pnavarro     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 23:22:19 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libutil.h"

int	ft_line(int k, int j)
{
	int i;

	i = 1;
	while (i < 5)
	{
		if (tab[j][i] == k)
			return (0);
		i++;
	}
	return (1);
}