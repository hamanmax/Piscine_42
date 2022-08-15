/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_params.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/19 13:41:35 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 10:30:48 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_print_params(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < argc - 1)
	{
		i++;
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		i++;
		if (i + 1 < argc && ft_strcmp(argv[i + 1], argv[i]) < 0)
		{
			argv[argc + 1] = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = argv[argc + 1];
			i = 0;
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
