/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/23 09:31:44 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 14:38:13 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = malloc((max - min) * sizeof(int))))
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}
