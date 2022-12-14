/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pnavarro <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/08 00:03:22 by pnavarro     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 16:07:17 by pnavarro    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "libutil.h"

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}
