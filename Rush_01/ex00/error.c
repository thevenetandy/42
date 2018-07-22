/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: classeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 16:25:35 by classeur          #+#    #+#             */
/*   Updated: 2018/07/14 18:14:04 by classeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_input(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (ac != 10)
	{
		print_error();
		return (84);
	}
	while (av[i])
	{
		while (av[i][j])
		{
			if ((av[i][j] < '1' || av[i][j] > '9') && av[i][j] != '.')
			{
				print_error();
				return (84);
			}
			j++;
		}
		i++;
	}
	return (0);
}
