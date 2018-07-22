/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 20:50:34 by athevene          #+#    #+#             */
/*   Updated: 2018/07/16 15:36:29 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nbr)
{
	unsigned int nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}
