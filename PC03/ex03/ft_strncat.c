/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/10 22:28:25 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 10:24:54 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n] && n < nb)
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = 0;
	return (dest);
}
