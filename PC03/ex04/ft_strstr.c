/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 10:59:01 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/15 12:31:16 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[n])
		{
			if (str[i] == to_find[n])
				i++;
			n++;
			if (to_find[n] == '\0')
				return (str + i - n);
			if (str[i] != to_find[n])
				n = 0;
		}
		i++;
	}
	return (0);
}
