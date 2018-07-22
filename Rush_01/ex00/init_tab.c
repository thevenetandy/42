/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: classeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:25:38 by classeur          #+#    #+#             */
/*   Updated: 2018/07/14 19:25:45 by classeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		***init_sudoku(int ***tab, char **av)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			tab[0][i][j] = (av[i + 1][j] != '.' ? (av[i + 1][j] - '0') : 0);
			tab[1][i][j] = (av[i + 1][j] == '.' ? 0 : 1);
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}

int		***malloc_sudoku(char **av, int ***tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((tab = malloc(sizeof(int **) * 2)) == NULL)
		return (NULL);
	while (i < 2)
	{
		if ((tab[i] = malloc(sizeof(int *) * 9)) == NULL)
			return (NULL);
		while (j < 9)
		{
			if ((tab[i][j] = malloc(sizeof(int) * 9)) == NULL)
				return (NULL);
			j++;
		}
		j = 0;
		i++;
	}
	tab = init_sudoku(tab, av);
	return (tab);
}
