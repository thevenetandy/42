/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: classeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:35:01 by classeur          #+#    #+#             */
/*   Updated: 2018/07/14 23:53:02 by classeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		***fill(int ***tab)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[1][i][j] == 0)
				tab[0][i][j] = check(i, j, tab, tab[0][i][j]);
		}
	}
	return (tab);
}

int		check(int y, int x, int ***tab, int nb)
{
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	while (nb < 9 && !flag)
	{
		while (i < 9 && !flag)
		{
			if (nb == tab[0][i][x] || nb == tab[0][y][i])
				flag = 1;
			i++;
		}
		i = 0;
		nb++;
	}
	flag = flag + check_carre(y, x, tab, nb);
	if (flag != 0)
		return (nb);
	return (-1);
}

int		check_carre(int y, int x, int ***tab, int nb)
{
	int		i;
	int		j;
	int		flag;

	flag = 0;
	y = y - (y % 3) + 3;
	x = x - (x % 3) + 3;
	i = y - 3;
	j = x - 3;
	while (i < y)
	{
		while (j < x)
		{
			if (nb == tab[0][i][j])
				flag = 1;
			j++;
		}
		j = x - 3;
		i++;
	}
	return (flag);
}
