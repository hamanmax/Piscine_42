/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_write_tab.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 16:01:13 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 15:05:16 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

/*char ft_checkstr( char *str)
  {
  int n;
  int i;
  char strok[];

  i = 0;
  n = 0;
  while (str[n])
  {
  while (str[n] >= '0' && str[n] <= '9')
  {
  strok[i] = str[n];
  i++;
  n++;
  }
  while (str[n] == ' ')
  {
  n++;
  if (str[n] == ':')
  {
  strok[i] = str[n];
  i++;
  n++;
  }
  }
  while (str[n] >= ' ' && str[n] <= '~')
  {
  strok[i] = str[n];
  i++;
  n++;
  while (str[n] == ' ')
  n++;
  strok[i] = str[n - 1]
  if (str[n] == '\n')
  {
  str[n] = strok[i];
  i++;
  n++;
  }
  }
  }
  printf("%s",strok);
  }*/

int		*ft_write_tabint(char *str)
{
	int		i;
	int		n;
	int		nb;
	int		tabint[50];

	i = 0;
	n = 0;
	while (str[n])
	{
		while (str[n] >= '0' && str[n] <= '9')
		{
			nb = nb * 10;
			nb += str[n] - '0';
			n++;
			tabint[i] = nb;
		}
		tabint[i] = nb;
		while (str[n] != '\n')
			n++;
		while (str[n] == '\n')
			n++;
		i++;
		nb = 0;
	}
	return (tabint);
}

char	**ft_write_tabchar(char *str)
{
	int		i;
	int		j;
	int		n;
	char	tab[150][200];

	i = 0;
	j = 0;
	n = 0;
	while (str[n])
	{
		while ((str[n] > 47 && str[n] <= 58) || str[n] == 32)
			n++;
		while (str[n] >= ' ' && str[n] <= '~')
		{
			tab[i][j] = str[n];
			j++;
			n++;
			if (str[n] == ' ')
			{
				n++;
				if (str[n] != ' ')
					tab[i][j] = str[n - 1];
			}
			j = 0;
			i++;
		}
		while (str[n] == '\n')
			n++;
	}
	return (tab);
}
