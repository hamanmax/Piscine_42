/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pnavarro <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 15:16:04 by pnavarro     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 23:28:33 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "libutil.h"

int	main(int argc, char **argv)
{
	void	*adr_tab;
	char	*adr_str;
	int		a;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	adr_str = argv[1];
	a = ft_test_str(adr_str);
	if (a == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_write_tab(adr_str);
	ft_validate(0);
	ft_show();
	return (0);
}
