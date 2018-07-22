/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: classeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:16:31 by classeur          #+#    #+#             */
/*   Updated: 2018/07/19 19:42:30 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		check_input(int ac, char **av);
void	print_error(void);
int		***malloc_sudoku(char **av, int ***tab);
int		***init_sudoku(int ***tab, char **av);
void	print_sudoku(int ***tab, int n);
int		***fill(int ***tab);
int		check(int y, int x, int ***tab, int nb);
int		check_carre(int y, int x, int ***tab, int nb);

#endif
