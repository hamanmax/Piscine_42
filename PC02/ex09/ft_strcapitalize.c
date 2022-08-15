/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/09 11:09:31 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 21:53:36 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' & str[i] <= 'Z')
			str[i] = str[i] + 32;
		while (str[i] < 'a' && str[i] > 'z')
		{
			if (str[i] >= 'a' & str[i] <= 'z')
				i++;
			if (str[i] <= 'a' && str[i] >= 'z')
				str[i] = str[i] + 32;
		}
	}
	return (str);
}

int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}
