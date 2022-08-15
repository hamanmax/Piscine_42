/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rwojdyla <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 16:02:04 by rwojdyla     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/20 23:16:15 by rwojdyla    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFER 10

//char *ft_write_tabchar(char *str);
int *ft_write_tabint(char *str);

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_putchar(char *c)
{
	write(1, &c + 48, 1);
}

void ft_sort_int_tab(int *tabint, char *tabchar)
{
	int i;
	int t;
	char *temp;

	i = 0;
	while (tabint[i])
	{
		if (tabint[i] < tabint[i + 1])
		{
			t = tabint[i];
			tabint[i] = tabint[i + 1];
			tab[i + 1] = t;
			temp = tabchar[i];
			tabchar[i] = tabchar[i + 1];
			tabchar[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}

int main()
{
	int fd;
	int ret;
	char buf[BUFFER];
	int c;
	char *tab;
	int i = 0;

	c = 0;;
	fd = open("numbers.dict", O_RDONLY);
	ret = BUFFER;
	while (ret == BUFFER)
	{
		ret = read(fd, buf, BUFFER);
		c = c + ret;
	}
	close(fd);
	tab = malloc(c * sizeof(char) + 1);
	fd = open("numbers.dict", O_RDONLY);
	ret = read(fd, tab, c);
	tab[c] = '\0';
	ft_write_tabint(tab);
	ft_write_tabchar(tab);
	ft_sort_int_tab(
	if (close(fd) == -1)
		return(1);
}
