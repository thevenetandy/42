/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:18:31 by athevene          #+#    #+#             */
/*   Updated: 2018/07/20 00:46:17 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nbr)
{
	unsigned int	nb;

	if (nbr < 0)
		ft_putchar('-');
	nb = nbr < 0 ? -(nbr) : nbr;
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}

void	ft_print_words_tables(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i++]);
		ft_putchar('\n');
	}
}

void	ft_show_tab(t_stock_par *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
