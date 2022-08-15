/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_backtracking.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhaman <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/22 22:07:26 by mhaman       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/22 23:16:23 by mhaman      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include<stdlib.h>

int ft_backtracking(int *tab,int i, int j)
{
	int right;
	int down_right;
	int down;
	int pos;

	right = ft_backtracking(tab, i, j + 1);
	down_right = ft_backtracking(tab, i + 1, j + 1);
	down = ft_backtracking(tab, i + 1, j);
	return(pos);
}

int main()
{
	int N = 1;
	int M = 1;
	int mat[50][50] =
	{
		{ 0, 0, 1, 0, 1, 1 },
		{ 0, 1, 1, 1, 0, 0 },
		{ 0, 0, 1, 1, 1, 1 },
		{ 1, 1, 0, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 0, 1, 1, 1 },
		{ 1, 0, 1, 1, 1, 1 },
		{ 1, 1, 1, 0, 1, 1 }
	};

	int size = 0;
	ft_backtracking(mat, M-1, N-1);
	return 0;
}
