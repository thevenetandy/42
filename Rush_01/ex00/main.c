/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: classeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:59:03 by classeur          #+#    #+#             */
/*   Updated: 2018/07/14 19:35:35 by classeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int ac, char **av)
{
	int		***tab;

	tab = NULL;
	if (check_input(ac, av) == 84)
		return (0);
	tab = malloc_sudoku(av, tab);
	tab = fill(tab);
	print_sudoku(tab, 0);
	return (0);
}
