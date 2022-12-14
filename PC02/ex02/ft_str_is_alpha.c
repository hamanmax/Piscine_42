/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_alpha.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 20:34:06 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/09 09:44:48 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 'a' & str[i] <= 'z' || str[i] >= 'A' & str[i] <= 'Z')
	{
		i++;
	}
	while (str[i] == '\0')
		return (1);
	return (0);
}
