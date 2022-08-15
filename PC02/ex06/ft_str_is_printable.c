/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_printable.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/08 09:39:57 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 17:25:49 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] >= ' ' && str[i] < 127)
	{
		i++;
	}
	while (str[i] == '\0')
		return (1);
	return (0);
}