/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/22 11:49:16 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 11:13:40 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;

	if (min >= max)
		return (0);
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (0);
	while (min <= max)
	{
		tab[max - min - 1] = max - 1;
		max--;
	}
	return (tab);
}
