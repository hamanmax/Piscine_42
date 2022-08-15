/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/23 13:23:35 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 18:51:43 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strcat(char *str, char *strs)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
		i++;
	while (strs[n])
	{
		str[i] = strs[n];
		n++;
		i++;
	}
	return (str);
}

int		ft_strlen(char *sep, char **strs, int size)
{
	int	i;
	int	j;
	int	lensep;
	int	lenstrs;
	int	nb;

	nb = 0;
	i = 0;
	j = 0;
	while (sep[i])
		i++;
	lensep = i;
	i = 0;
	while (strs[i] && i <= size)
	{
		while (strs[i][j])
			j++;
		nb = nb + j;
		j = 0;
		i++;
	}
	lenstrs = nb + (lensep * (size - 1));
	return (lenstrs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		lenstrs;

	i = 0;
	j = 0;
	lenstrs = ft_strlen(sep, strs, size);
	str = (char*)malloc((sizeof(char*) * (lenstrs)) + 1);
	if (strs[i][j] == '\0')
	{
		return (str);
	}
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1 && sep[i] != '\0')
			ft_strcat(str, sep);
		i++;
	}
	str[lenstrs] = '\0';
	return (str);
}
