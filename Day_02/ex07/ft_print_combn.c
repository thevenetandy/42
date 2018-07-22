/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 10:26:50 by athevene          #+#    #+#             */
/*   Updated: 2018/07/05 10:45:23 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar('0' + nbr % 10);
}

void	ft_print_combn(int n)
{
	int combs[n];
	int i;

	combs[0] = -1;
	i = 0;
	while (i++ < n)
	{
		ft_putnbr(i);
	}
}
